#include<stdio.h>
void DisplayConvert(char Cvalue)
{
    if(Cvalue >= 'a' && Cvalue <= 'z')
    {
        printf("%c ", (Cvalue-32));
    }
    else if(Cvalue >= 'A' && Cvalue <= 'Z')
    {
        printf("%c ", (Cvalue+32));
    }
}
int main()
{
    char cValue = '\0';
    printf("enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}