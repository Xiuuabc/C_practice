#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int start_min = a * 60 + b ;
    int end_min = c * 60 + d ;
    int e , f ;
    e = (end_min - start_min) / 60 ;
    f = (end_min - start_min) % 60 ;
    printf("%d %d",e , f);
    return 0;
}
