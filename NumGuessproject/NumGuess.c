#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   
int main() 
{
    
    srand(time(0));
    
    int random_num = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guess;

    printf("Guess the Number");
    do
    {
        printf("Guess the number");
        scanf("%d", &guess);
        if (guess > random_num)
        {
            printf("Lower number please!\n");
        }
        else if (guess < random_num)
        {
            printf("Higher number please!\n");
        }
        no_of_guesses++;
    }
    while(guess != random_num);

    printf("You guessed it in %d attempts", no_of_guesses);

    return 0;
}
