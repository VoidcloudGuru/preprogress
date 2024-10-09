#include <stdio.h>

struct statistics
{
    int points;
    int games;
};
int main()
{
    struct statistics players[5];
    float avg[5];
    // iterates through to collect the total points and games of each player from the user
    // the "i" keeps updating the number of players throughout the loop
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the player %d's points total:", i + 1);
        scanf("%d", &players[i].points);

        printf("Enter the player %d's games played:", i + 1);
        scanf("%d", &players[i].games);

        //the if is put in the input loop so that it calculates for each player 
        // checks for the games played for each player and then calculates their averages and stores them in avg
        // the else caters for a player that played no games
        if (players[i].games > 0)
        {
            avg[i] = (float)players[i].points / players[i].games;
        }
        else
        {
            avg[i] = 0;
        }
    }
    // iterates though to print the average of each player
    for (i = 0; i < 5; i++)
    {
        printf("Player %d's average was: %.2f\n", i + 1, avg[i]);
    }

    return 0;
}