#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));  

    // Generate a random number between 1 and 100
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // printf("Random number: %d\n", random_number);
    do {
        
        printf ("Guess the number");
        scanf ("%d", &guessed_number);
        if (guessed_number > randomnumber){

            printf ("Lower number please\n");
        
        }

        else if (guessed_number < randomnumber){

            printf ("Higher number please \n");

        }
        else {

            printf ("Congrats!!\n");

        }
        no_of_guesses++;

    } while (guessed_number != randomnumber);

    printf ("You guessed the number in %d guessed\n", no_of_guesses);
    
    return 0;
}
