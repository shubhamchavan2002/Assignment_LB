#include<stdio.h>

int MultiDigit(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMulti = iMulti * iDigit;
        }
         iNo = iNo / 10;
    }
    return iMulti;   
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    iRet = MultiDigit(iValue);
    printf("%d", iRet);

    return 0;
}