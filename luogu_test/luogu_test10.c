#include <stdio.h>
#include <math.h>
int main()
{
    int a , b ;
    scanf("%d %d", &a, &b);
    int pen_yuan = 1 * 10 + 9 ;
    int yu_yuan = a * 10 + b ;
    int pen_num =(int) floor(yu_yuan / pen_yuan) ;
    printf("%d", pen_num) ;
    return 0 ;
}
