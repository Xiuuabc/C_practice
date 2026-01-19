#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch (x)
    {
        case 1:
            printf("Today, I ate 1 apple.");
            break;
        case 0:
            printf("Today, I ate 0 apple.");
            break;
        default:
            printf("Today, I ate %d apples.",x);
            break;
    }
    return 0 ;
}
