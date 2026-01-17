#include <stdio.h>
#include <math.h>
int main()
{
    float s , v ;
    int min , hour ;
    min = ceil(s / v);
    hour = ceil(min / 60);
    if min <= 50
    {
        printf("07:%2f", 60 - min);
    }
    else if min > 50 && min <= 60
    {
        printf("07:0%1f",60 - min);
    }
    else if hour <= 8 && hour > 1 && min - 60 * hour >= 10
    {
        printf("0%1f:%f", 8 - hour, 60 - min);
    }
    else if hour <= 8 && hour > 1 && min - 60 * hour < 10
    {
        printf("0%1f:%01f", 8 - hour, 60 - min)
    }



}
