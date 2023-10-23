#include<stdio.h>

int Factorial(int iNo)
{
    int icnt =  0;
    int imul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = iNo; icnt >= 1; icnt--)
    {
        imul = imul*icnt;
    }
    return imul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("factorial of number is %d ",iRet);    
    return 0;
}