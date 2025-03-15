#include <stdio.h>
int main()
{
    char s[50];
    fgets(s, 50, stdin);
    printf("Hello, World! \n");
    printf("%s", s);
    return 0;
}