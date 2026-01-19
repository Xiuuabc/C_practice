#include <stdio.h>

int main(void)
{
    int a,b,sum;
    int day = 1;
    int max_sum = 0 , max_day = 0;
    for (day = 1;day<=7;day++)
    {
        scanf("%d %d\n",&a,&b);
        sum = a + b ;
        if (sum > 8)
        {
            if (sum > max_sum)
            {
                max_sum = sum ;
                max_day = day ;
            }
        }
    }
    printf("%d\n",max_day);
    return 0;
}
