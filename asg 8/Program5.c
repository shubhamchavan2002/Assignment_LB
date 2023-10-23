#include<stdio.h>

int FactorialDiff(int iNo)
{
    int icnt = 0;
    int iEven = 1;
    int iOdd = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt=1; icnt<=iNo; icnt++)
    {
            if ((icnt % 2) == 0)
            {
                iEven = iEven * icnt;
            }
            if((icnt % 2) != 0)
            {
                iOdd = iOdd * icnt;
            }
            
        }
    return iEven - iOdd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf(" factorial difference is %d", iRet);
    return 0;
}