#include <stdio.h>

int main()
{
    int players = 5;
    int games = 4;
    int total_scores;
    float highest_av_score;
    int scores[5][4];

    for (int GAMES = 0; GAMES < games; GAMES++) // iterate through each game
    {
        //+1 enables the counting of the games and players to start from 1 instead of starting at zero
        printf("Enter player scores for game %d:\n", GAMES + 1);
        for (int PLAYERS = 0; PLAYERS < players; PLAYERS++) // iterates through players in each game
        {
            printf("Player %d:", PLAYERS + 1);
            scanf("%d", &scores[5][4]); // prompts the user for the scores of every player
        }
    }
    // iterates through to calculate the total scores
    for (int GAMES = 0; GAMES < games; GAMES++)
    {
        for (int PLAYERS = 0; PLAYERS < players; PLAYERS++)
        {
            total_scores += scores[players][games]; 
            // adds the scores of every player in every game and assigns them to total_scores
        }
    }
    for (int PLAYERS = 0; PLAYERS < players; PLAYERS++)
    {
        highest_av_score = (float)total_scores / games; // calculates the average score of every player
        // float in brackets type casts the interger value to a float
    }
        printf("Player %d had the highest scoring average at %.2f points per game\n", players,highest_av_score);
        
        return 0;
    }