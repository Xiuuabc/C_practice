#include <stdio.h>
int main()
{
    int year ;
    scanf("%d",&year);
    int p1 = ((year % 4 == 0) && (year % 100 != 0) );
    int p2 = (year % 400 == 0);
    if ((p1 ^ p2) == 1)
        printf("1");
    else printf("0");
    return 0 ;
}
