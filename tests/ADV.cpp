#include <windows.h>
#include <tchar.h>

// Function declarations
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void DrawSystemInfo(HDC hdc);
void DrawNetworkInfo(HDC hdc);
void DrawTerminal(HDC hdc);

// Entry point
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "Dashboard Window Class";

    // Register the window class
    WNDCLASS wc = { };
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    // Create the window
    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, "System Dashboard",
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 1024, 768,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Run the message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

// Window procedure function
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);

            // Draw sections
            DrawSystemInfo(hdc);
            DrawNetworkInfo(hdc);
            DrawTerminal(hdc);

            EndPaint(hwnd, &ps);
            return 0;
        }
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

// Function to draw system information section
void DrawSystemInfo(HDC hdc) {
    RECT rect;
    SetRect(&rect, 10, 10, 320, 300); // Adjusted for better placement
    DrawText(hdc, _T("Time: 18:38:18\nDate: Nov 16\nUptime: 1:00:33\nCPU Usage: 54%\nTemp: 68C\nRAM Usage: 2/7.5 GB\nTop Processes:\nElectron\nGnome-Shell\nXorg"), -1, &rect, DT_LEFT);
}

// Function to draw network information section
void DrawNetworkInfo(HDC hdc) {
    RECT rect;
    SetRect(&rect, 330, 10, 660, 300); // Adjusted for better placement
    DrawText(hdc, _T("Network Status: Online\nIPV4: 86.252.110.51\nPing: 3ms\nWorld View: London\nNetwork Traffic: 10.3MB/s\nUp/Down MB/s:\n\nCopy\nPaste"), -1, &rect, DT_LEFT);
}

// Function to draw terminal section
void DrawTerminal(HDC hdc) {
    RECT rect;
    SetRect(&rect, 670, 10, 1000, 300); // Adjusted for better placement
    DrawText(hdc, _T("{\n  \"api_version\": \"2.0.0\",\n  \"geo\": {\n    \"city\": null,\n    \"continent\": { ... },\n    \"country\": { ... }\n  }\n  ...\n}"), -1, &rect, DT_LEFT);
    
    // Drawing the keyboard
    RECT keyboardRect;
    SetRect(&rect, 10, 310, 1000, 700); // Place at bottom section
    DrawText(hdc, _T("[Esc] [Tab] [Caps] [Shift] [Ctrl] [Alt] [Enter] ... "), -1, &keyboardRect, DT_LEFT);
}
