#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int flips;
    int flip_results;
    int tails_counter = 0;
    int heads_counter = 0;

    printf("How many times would you like to flip the coin?\n");
    scanf("%d", &flips);

    // random number generator for the simulation(generates random numbers)
    srand(time(NULL));
    // simulating the coin
    int i = 0;
    while (i < flips)
    {
        // all the random numbers simulated are modulated by 2 to either give 0 or 1
        flip_results = rand() % 2; // rand returns an integer value that is modulated by 2
        if (flip_results == 0)
        {
            heads_counter++; // keeps count of all heads of the coin during simulation
        }
        else
        {
            tails_counter++; // keeps count of all the tails during simulation
        }
        i++;
    }
    printf("After flipping the coin %d times, the results were\n", flips);
    printf("%d heads\n", heads_counter);
    printf("%d tails\n", tails_counter);

    return 0;
}