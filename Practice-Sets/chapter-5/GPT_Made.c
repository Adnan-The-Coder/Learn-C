#include <stdio.h>
#include <stdlib.h> // For system function
#include <time.h>   // For time function
#include <windows.h> // For Sleep function

#define GREEN   "\033[0;32m"
#define RED     "\033[0;31m"
#define YELLOW  "\033[0;33m"
#define WHITE   "\033[0;37m"
#define RESET   "\033[0m"  // Reset color to default

#define WIDTH   80
#define HEIGHT  20
#define GRAPH_WIDTH 20
#define GRAPH_HEIGHT 10

void clear_screen() {
    // Clear the terminal screen
    printf("\033[H\033[J");
}

void print_hacking_line(int line_number) {
    // Array of colors to use
    const char *colors[] = {GREEN, RED, YELLOW, WHITE};
    int num_colors = sizeof(colors) / sizeof(colors[0]);
    
    // Select color
    const char *color = colors[line_number % num_colors];

    // Print a line with simulated hacking text
    printf("%s", color);
    for (int j = 0; j < WIDTH; j++) {
        if (rand() % 10 < 2) {
            printf("0x%X", rand() % 256);
        } else if (rand() % 10 < 3) {
            printf("%%");
        } else if (rand() % 10 < 4) {
            printf("::");
        } else if (rand() % 10 < 5) {
            printf(">>");
        } else {
            printf(" ");
        }
    }
    printf(RESET "\n");
}

void print_graph() {
    int data[GRAPH_WIDTH];
    int max_value = GRAPH_HEIGHT;

    // Generate random data
    for (int i = 0; i < GRAPH_WIDTH; i++) {
        data[i] = rand() % (max_value + 1);
    }

    // Print the graph
    printf("%s", YELLOW);
    for (int row = max_value; row >= 0; row--) {
        for (int col = 0; col < GRAPH_WIDTH; col++) {
            if (data[col] >= row) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf(RESET "\n");
}

void print_initial_code() {
    const char *code_snippets[] = {
        "Initializing system...",
        "Accessing database...",
        "Bypassing security protocols...",
        "Decrypting data...",
        "Running diagnostics...",
        "Fetching user credentials...",
        "Connection established.",
        "Warning: Unauthorized access detected!",
        "Brute Force Attack Initiated",
        "System Corruption in Progress..."
    };
    int num_snippets = sizeof(code_snippets) / sizeof(code_snippets[0]);
    
    // Display the initial code snippets without clearing the screen
    printf("%s", GREEN);
    for (int i = 0; i < num_snippets; i++) {
        printf("\r%s", code_snippets[i]);
        fflush(stdout); // Ensure the output is immediately visible
        Sleep(1500); // Sleep for 1.5 seconds (1500 milliseconds)
    }
    printf(RESET "\n");
}

void open_random_tabs() {
    const char *commands[] = {
        "start chrome",    // Open Chrome browser
        "start notepad",   // Open Notepad
        "start cmd",       // Open Command Prompt
        "start calc",      // Open Calculator
        "start msedge",    // Open Microsoft Edge browser
    };
    int num_commands = sizeof(commands) / sizeof(commands[0]);
    
    // Open a random application
    int command_index = rand() % num_commands;
    system(commands[command_index]);
}

int main() {
    int n = HEIGHT; // Number of lines to print

    // Seed the random number generator
    srand(time(NULL));

    clear_screen(); // Clear the screen initially
    print_initial_code(); // Print some initial code-like messages

    Sleep(2000); // Additional pause to let the final message stay on screen (2000 milliseconds)

    for (int i = 0; i < n; i++) {
        clear_screen(); // Clear the screen to simulate animation
        print_hacking_line(i); // Print a line of the "hacking" effect
        print_graph(); // Print a graph
        open_random_tabs(); // Open a random tab or application
        Sleep(500); // Sleep for 500 milliseconds to create animation effect
    }

    return 0;
}
