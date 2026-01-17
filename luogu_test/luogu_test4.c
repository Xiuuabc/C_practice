#include <stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%1f%1f%1f.%1f", &a, &b, &c, &d);
    printf("%.3f",d + 0.1 * c + 0.01 * b + 0.001 * a);
    return 0;
}
