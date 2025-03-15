#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2, isum, idiff;
    float dec1, dec2, fsum, fdiff;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &dec1, &dec2);
    isum = num1 + num2;
    idiff = num1 - num2;
    fsum = dec1 + dec2;
    fdiff = dec1 - dec2;
    printf("%d ", isum);
    printf("%d\n", idiff);
    printf("%.1f ", fsum);
    printf("%.1f", fdiff);

    return 0;
}