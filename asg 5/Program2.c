#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkGreater(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("enter number ");
    scanf("%d", &iValue);

    bRet = chkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}