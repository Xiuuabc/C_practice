
#include <stdio.h>
#include <math.h>
int main(void)
{
    float s, v;
    scanf("%f %f", &s, &v);
    int walk = (int)ceil(s / v);
    // 2. 加上扔垃圾 10 分钟
    int total = walk + 10;
    // 3. 8:00 是第 480 分钟
    int start = 8 * 60 - total;
    // 4. 不足 0 点，往前一天
    if (start < 0)
        start += 24 * 60;
    // 5. 拆成时和分
    int hour = start / 60;
    int minute = start % 60;
    // 6. 按 HH:MM 输出，两位补 0
    printf("%02d:%02d\n", hour, minute);
    return 0;
}
