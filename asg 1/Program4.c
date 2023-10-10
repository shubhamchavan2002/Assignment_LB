#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int check(int ino)
{
    if((ino % 5) == 0)
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

    printf("enter the number");
    scanf("%d", &iValue);

    bRet = check(iValue);

    if(bRet == TRUE)
    {
        printf("divisble by 5");
    }
    else
    {
        printf("not divisble by 5");
    }

    return 0;
}