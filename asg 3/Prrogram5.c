#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int ChkVowel(char cNo)
{
    if(cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u'||
       cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    return 0;
}