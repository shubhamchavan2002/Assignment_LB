#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int FSum = 0;
    int NFSum = 0;
    for(iCnt=1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           FSum = FSum + iCnt;
        }
    }
    for(iCnt=1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            NFSum = NFSum + iCnt;
        }
    }

    return FSum - NFSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);
    return 0;
}