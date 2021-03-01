/* Sitti Aulia Sabina R / 20051397016 / 2020B MI */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void push(char);
char pop();
char stack[100];
int top = -1;
int main()
{
    char str[100];
    int i, count = 0, len;

    printf("Masukan kata/kalimat : ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        push(str[i]);
    }

    for (i = 0; i < len; i++)
    {
        if (str[i] == pop())
            count++;
    }

    if (count == len)
        printf("kata/kalimat %s ini adalah kalimat palindrom", str);
    else
        printf("kata/kalimat %s ini adalah bukan kalimat palindrom", str);
        getch();
}

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return(stack[top--]);
}
