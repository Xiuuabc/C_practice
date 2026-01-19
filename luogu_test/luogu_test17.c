#include <stdio.h>
#include<math.h>
int main()
{
    float m,h;
    scanf("%f %f", &m,&h);
    float BMI = m / pow(h,2);
    if (BMI < 18.5)
        printf("Underweight");
    else if (BMI >= 18.5 && BMI < 24)
        printf("Normal");
    else if (BMI >= 24)
        printf("%.4f\nOverweight", BMI);
    return 0;
}
