#include<stdio.h>

int DollarToINR(int iNo)
{
    int Inr = 0;
    int iInd = 70;

    Inr = iNo * iInd;
    return Inr;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("value in INR is %d", iRet);
    return 0;
}