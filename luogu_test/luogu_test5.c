#include <stdio.h>
int main()
{
    float ml;
    int num;
    scanf("%f %d", &ml, &num);
    printf("%.3f\n%d", ml / num, 2 * num);
    return 0;
}
