#include <stdio.h>
#include <string.h>

int main()
{
    float scores[10];
    float average_score;
    char choice[10];
    float sum;
    int score_count = 0;
    // loop the user's test scores
    while (score_count < 8)
    {
        printf("Enter test score:\n");
        scanf("%f", &scores[score_count]); // gives the memory adddress to where the test score will be stored
        sum += scores[score_count];        // calculates the sum of the test scores till user breaks the loop
        score_count++;

        // ask the user if they would like to continue or not
        printf("Would you like to continue yes/no\n");
        scanf("%s", choice);

        // compare the choice of the user to either continue or break the loop
        if (strcmp(choice, "no") == 0)
        {
            break;
        }
    }

    // calculate the user's average score of the scores after breaking the loop
    average_score = sum / score_count;
    printf("%.2f is the average score.\n", average_score);

    return 0;
}