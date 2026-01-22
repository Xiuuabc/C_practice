#include <stdio.h>
int gcd(int x,int y)
{
    while(y != 0)
    {
        int t = x % y;
        x = y;
        y = t;
    }
    return x;
}

int main(void)
{
    int a,b,c;
    int t;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b) {t = a,a = b,b = t;}
    if (a >= c) {t = a,a = c,c = t;}
    if (b >= c) {t = b,b = c,c = t;}
    int g = gcd(a,c);
    a /= g;
    c /= g;
    printf("%d/%d",a, c);
    return 0;
}
