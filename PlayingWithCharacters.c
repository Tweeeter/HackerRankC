#include <stdio.h>
int main()
{
    char ch;
    char s[50];
    char sen[50];
    printf("enter a charecter \n");
    scanf("%c", &ch);
    printf("enter a Word \n");
    scanf("%s", s);
    printf("enter a sentence");
    getchar(); // Consume newline character
    fgets(sen, 50, stdin);
    printf("the Charecter you entered --> %c The Word you entered --> %s The Sentence you entered --> %s", ch, s, sen);

    return 0;
}