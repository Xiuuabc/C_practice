#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
//declration func
int compute_score(string word);
const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
//prompt for user for 2 inputs//
    string word1 = get_string("player1：");
    string word2 = get_string("player2: ");

//compute the score for each input
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

//print the winner or tie
    if (score1 > score2)
    {
        printf("player1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("player2 wins!\n");
    }
    else if (score1 == score2)
    {
        printf("ties!\n");
    }
    return 0;
}
//define the function named compute_sscore
int compute_score(string word)
{
    int score = 0;
    for (int i = 0,n = strlen(word);i < n;i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score ;
}


