// This is Guess Game 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    printf("\n------------------------------ Welcome to the Game of Guess ------------------------------\n");
    printf("Guess Any Number Between 1 to 100\n\n");

    // Initialize random number Generator
    srand(time(0));

    // Generate Random number between 1 and 100 
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int user_inputs;
    do{
        printf("Guess the number: ");
        scanf("%d",&user_inputs);
        number_of_guesses++;
        if (user_inputs < randomNumber){
            printf("Higher Number Please\n\n");
        }
        else{
            printf("Lower Number Please\n\n");
        }
    }
    while(user_inputs!=randomNumber);

    printf("\n------------------------------ You Won ! ------------------------------\n");
    printf("\nYou Guessed the Number in %d times and the random Number was %d\n\n",number_of_guesses,randomNumber);
    
    return 0;
}