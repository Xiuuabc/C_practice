#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

//declaration of the funcation
int count_letter(string text);
int count_word(string text);
int count_sentence(string text);

int main()
{
//ask user to input texts
    string text = get_string("Enter the text:");

//compute the level of texts
    int letter = count_letter(text);
    int word = count_word(text);
    int sentence = count_sentence(text);
    double L = ((double)(letter / word) * 100);
    double S = ((double)(sentence / word) * 100);
    double level = round(0.0588 * L - 0.296 * S - 15.8);

//printf the level
    if (level > 16)
    {
        printf("level 16+\n");
    }
    else if (level < 1)
    {
        printf("Before level 1\n");
    }
    else if (1 <= level && level <= 16)
    {
        printf("level %.0f\n",level);
    }
    return 0 ;
}

//define the func count letter
int count_letter(string text)
{
    int letter = 0;
    for (int i = 0,n = strlen(text);i < n; i++)
    {
        letter++;
        if (isspace(text[i])) {letter-- ;}
    }
    return letter;
}

//define the func count words
int count_word (string text)
{
    int word = 0;
    for (int i = 0,n = strlen(text);i < n; i++)
    {
        if (isspace(text[i])) {word++;}
    }
    return (word + 1) ;
}

//define the func count sentence
int count_sentence (string text)
{
    int sentence = 0;
    for (int i = 0,n = strlen(text);i < n; i++)
    {
        if (text[i] == '?' || text[i] == '.' || text[i] == '!')
        {
            sentence++;
        }
    }
    return sentence;
}





