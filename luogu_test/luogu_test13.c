#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    int p1 = (x % 2 == 0);
    int p2 = (x > 4 && x <= 12);
    int A = p1 && p2;
    int B = p1 || p2;
    int C = p1 ^ p2;      
    int D = !p1 && !p2;
    printf("%d %d %d %d\n", A, B, C, D);
    return 0;
}

