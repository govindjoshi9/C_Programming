#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandoNumber()
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if (char1 == char2)
    {
        return -1;
    }
    if (char1 == 'r')
        && (char2 == 's')
        {
            return 1;
        }
    else
    {
        return 0;
    }
    if (char1 == 'p')
        && (char2 == 'r')
        {
            return 1;
        }
    else
    {
        return 0;
    }
    if (char1 == 's')
        && (char2 == 'p')
        {
            return 1;
        }
    else
    {
        return 0;
    }
}
void main()
{
    int playerScore = 0, compScore 0, tamp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to Rock, Paper Scissors\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Player 1 s Turn:\n");
        printf("Choos 1 for Rock, 2 for Paper and 3 for Seissors\n");
        scanf("%d", &tamp);
        playerChar = dict[tamp - 1];
        printf("You chose %c\n\n",playerChar);

        printf("Player 1 s Turn:\n");
        printf("Choos 1 for Rock, 2 for Paper and 3 for Seissors\n");
        tamp = generateRandoNumber(3) + 1;
        compChar = dict[tamp - 1];
        printf("comp chose %c\n",compChar);

        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
        }
        else
        {
            playerScore += 1;
        }
    }

   
}