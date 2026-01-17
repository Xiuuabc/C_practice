#include <stdio.h>
#include <math.h>
int main()
{
    float s , v ;
    float min , hour ;
    min = ceil(s / v);
    hour = ceil(min / 60);
    // declaration
    if (hour == 1)
    {
        if (min <= 50)
        {
            printf("07:%2f", 60 - min);
        }
        else if (min > 50 && min <= 60)
        {
            printf("07:0%1f",60 - min);
        }
    }
    // if hour = 1
    else if (hour <= 8)
    {
        if (min - 60 * hour >= 10)
        {
            printf("0%1f:%2f",8 - hour, min - 60 * hour);
        }
        else printf("0%1f:0%1f", 8 - hour, min - 60 * hour);
    }
    // if 1 < hour <= 8
    else if (hour > 8)
    {
        if (min - 60 * hour >= 10)
        printf("%2f:%2f",24 - (hour - 8), min - 60 * hour);
        else printf("%2f:0%1f",24 - (hour - 8), min - 60 * hour );
    }
    // if 8< hour <= 22
    else if (hour > 22)
    {
        if (min - 60 * hour >= 10)
        {
            printf("0%1f:%2f",24 - (hour - 8), min - 60 * hour);
        }
        else printf ("0%1f:0%1f", 24 - (hour - 8), min - 60 * hour);
    }
    // if 22 < hour <= 24
    return 0;
}
