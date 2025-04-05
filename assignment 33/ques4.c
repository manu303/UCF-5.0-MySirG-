#include<stdio.h>

// Function declarations
void sort(int ranking[], int size);
void UpdateScoreBoard(int score_board[4][4]);
void DisplayScoreCard(int score_board[4][4]);
int ScoreofPlayer(int score_board[4][4], int playernum);
int winnerofgame(int score_board[4][4]);
void rank(int score_board[4][4]);

void UpdateScoreBoard(int score_board[4][4])
{
    int i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(i == j)
                score_board[i][j] = -1;  // No game with themselves
            else
            {
                printf("Enter %d player score against %d player: ", i, j);
                scanf("%d", &score_board[i][j]); 
            }
        }
    }
}

void DisplayScoreCard(int score_board[4][4])
{
    int i, j;
    printf("\nScore Board:\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(j == 3)
                printf("%d \n", score_board[i][j]);
            else
                printf("%d ", score_board[i][j]);
        }
    }
}

int ScoreofPlayer(int score_board[4][4], int playernum)
{
    int sum = 0;
    for(int j = 0; j < 4; j++)
    {
        if(score_board[playernum][j] != -1)  // Don't add -1 for the same player
        {
            sum += score_board[playernum][j];
        }
    }
    return sum;
}

int winnerofgame(int score_board[4][4])
{
    int p0, p1, p2, p3;
    p0 = ScoreofPlayer(score_board, 0);
    p1 = ScoreofPlayer(score_board, 1);
    p2 = ScoreofPlayer(score_board, 2);
    p3 = ScoreofPlayer(score_board, 3);

    // Now we return the player number (index) of the winner
    if(p0 > p1 && p0 > p2 && p0 > p3)
        return 0;
    else if(p1 > p2 && p1 > p3)
        return 1;
    else if(p2 > p3)
        return 2;
    else 
        return 3;
}

void rank(int score_board[4][4])
{
    int p0, p1, p2, p3;
    p0 = ScoreofPlayer(score_board, 0);
    p1 = ScoreofPlayer(score_board, 1);
    p2 = ScoreofPlayer(score_board, 2);
    p3 = ScoreofPlayer(score_board, 3);

    // Store player scores in an array
    int ranking[4] = {p0, p1, p2, p3};

    // Sort the array to determine the ranks
    sort(ranking, 4);
    
    // Print the rankings
    printf("Player rankings based on scores:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("Player %d: %d points\n", i, ranking[i]);
    }
}

void sort(int ranking[], int size)
{
    int i, round, temp;
    for(round = 1; round <= size - 1; round++)
    {
        for(i = 0; i < size - round; i++)
        {
            if(ranking[i] < ranking[i + 1])  // Sorting in descending order
            {
                temp = ranking[i];
                ranking[i] = ranking[i + 1];
                ranking[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int score_board[4][4], playerscore, winner, playernum;

    UpdateScoreBoard(score_board); // Update the score board
    DisplayScoreCard(score_board); // Display the score card
    
    printf("Enter player number (0-3) to know their score: ");
    scanf("%d", &playernum);
    playerscore = ScoreofPlayer(score_board, playernum);  // Get the score for the given player
    printf("The score of player %d is %d\n", playernum, playerscore);

    winner = winnerofgame(score_board);  // Determine the winner
    printf("The winner of the game is player %d\n", winner);

    rank(score_board);  // Display player rankings
    
    return 0;
}
