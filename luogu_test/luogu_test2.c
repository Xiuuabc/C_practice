#include <stdio.h>
int main()
{
    int row, col;
    char chracter;
    scanf("%c",&chracter);
    for (row = 1; row <= 3; row++)
    {
        for (col = 1; col <= 3 - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("%c",chracter);
        }
        printf("\n");
    }
    return 0;
}
