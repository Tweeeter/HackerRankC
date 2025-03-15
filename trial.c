#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

int main()
{
    int num1, num2;
    float dec1, dec2;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &dec1, &dec2);
    printf("%d %d \n", num1 + num2, num1 - num2);
    printf("%.1f %.1f", dec1 + dec2, dec1 - dec2);

    return 0;
}