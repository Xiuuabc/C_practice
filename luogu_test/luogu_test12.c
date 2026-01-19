#include <stdio.h>
int main(void)
{
    int m, t, s;
    scanf("%d %d %d", &m, &t, &s);
    if (t == 0) {          // 0 分钟吃一个，肯定全吃完
        printf("0\n");
        return 0;
    }
    int started = (s + t - 1) / t;   // 向上取整 ceil(s / t)
    int left = m - started;
    if (left < 0) left = 0;
    printf("%d\n", left);
    return 0;
}

