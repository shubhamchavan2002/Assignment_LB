#include<stdio.h>

int main()
{
    char Name[30];
    printf("please enter full name");
    gets(Name);

    printf("your name is %s", Name);
    return 0;
}