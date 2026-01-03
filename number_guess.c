#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess;
    int attempts = 5;

    srand(time(0));

    secretNumber = (rand() % 10) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("You have 5 attempts to guess the number (1 to 10).\n");

    while (attempts > 0)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts--;

        if (guess > secretNumber)
        {
            printf("Too high!\n");
        }
        else if (guess < secretNumber)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number.\n");
            return 0; 
        }

        printf("Attempts left: %d\n", attempts);
    }

    printf("\nGame Over! The correct number was %d.\n", secretNumber);

    return 0;
}
