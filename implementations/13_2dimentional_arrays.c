#include <stdio.h>

// declare constant vars for these values
#define GAMES 4
#define PLAYERS 5

int main(void)
{
    // declare two-dimensional array to store scores for 5 players over 4 games;
    // declare float array to store our totals for each player later
    int scores[GAMES][PLAYERS];
    int totals[PLAYERS];
    int highest_total;

    // we need an outer for loop counter and an inner for loop counter;
    int game_counter, player_counter;

    // start outer loop (4 games)
    for (game_counter = 0; game_counter != GAMES; game_counter++)
    {
        printf("Game #%d\n", (game_counter + 1));

        // start inner loop for each player (5 players)
        for (player_counter = 0; player_counter != PLAYERS; player_counter++)
        {
            printf("\tEnter scoring total for Player #%d: ", (player_counter + 1));

            // put the score into the scores array
            scanf("%d", &scores[game_counter][player_counter]);
        }

        printf("\n");
    }

    // create a loop to iterate through each player game by game to create their
    // point totals
    int player_total;
    for (player_counter = 0; player_counter != PLAYERS; player_counter++)
    {
        player_total = 0;

        for (game_counter = 0; game_counter != GAMES; game_counter++)
        {
            // this player's total will be added to by each game total for the player
            // in the scores array
            player_total += scores[game_counter][player_counter];
        }

        // we begin populating the totals array we initialized earlier with each
        // player's total before moving onto the next player
        totals[player_counter] = player_total;
    }

    // now we'll create the highest total of 0 to start, and if we iterate through
    // the totals array each total in the array that's higher than the previous
    // highest, will be come the new highest
    highest_total = 0;
    int player_id;
    int current_total;

    for (player_counter = 0; player_counter != PLAYERS; player_counter++)
    {
        current_total = totals[player_counter];

        if (current_total > highest_total)
        {
            highest_total = current_total;

            // this player_id variable will help us keep track of who the current
            // leader is in points
            player_id = (player_counter + 1);
        }
    }

    // initialize a new float variable which will be our average
    // use the (float) operator to change the integer variable being divided into
    // a float operation
    float ppg = (float)(highest_total / 4);
    printf("Player #%d had the highest scoring average at %.2f points per game.\n", player_id, ppg);

    return 0;
}