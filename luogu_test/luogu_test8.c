#include <stdio.h>
#include <math.h>
int main()
{
    int h , r ;
    scanf("%d %d", &h,&r);
    float v = h * 3.14 * pow(r,2) ;
    printf("%d", (int)ceil(20000 / v)) ;
    return 0;
}
