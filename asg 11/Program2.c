#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL chkZero(int iNo)
{
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter number: ");
    scanf("%d", &iValue);

    bRet = chkZero(iValue);

    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("there is no zero");
    }
    return 0;
}