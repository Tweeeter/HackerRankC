#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
    *a += *b;
    *b = abs(*a - (2 * *b));
}
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*
𝑏 = |(𝑎 + 𝑏) − 2𝑏|
𝑏 = ∣𝑎 − 𝑏∣
*/
