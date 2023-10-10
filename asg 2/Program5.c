#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

     printf("enter number ");
    scanf("%d", &iValue);

    ChkEven(iValue);

    return 0;
}