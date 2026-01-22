#include <stdio.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        int day = (x + i) % 7;   // 1~5: 周一到周五，6: 周六，0: 周日
    if (day >= 1 && day <= 5) {
            total += 250;
        }
    }
    printf("%d\n", total);
    return 0;
}
