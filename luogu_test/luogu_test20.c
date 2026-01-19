#include <stdio.h>
int main()
{
    int n; // num of pen
    scanf("%d", &n);
    int min_price, num_pen_packet, price_packet, num_packet, price;
    int i = 1;
    // INPUT
    for(i = 1; i <= 3; i++)
    {
        scanf("%d %d\n", &num_pen_packet, &price_packet);
        num_packet = (num_pen_packet + n - 1) / num_pen_packet;
        price = num_packet * price_packet;
        if (i == 1) {min_price = price;}
        if (price < min_price) {min_price = price;}
    }
    // PROCESS
    printf("%d\n", min_price);
    return 0;
    // OUTPUT
}
