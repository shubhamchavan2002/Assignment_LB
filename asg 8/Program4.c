#include<stdio.h>

int OddFactorial(int iNo)
{
    int icnt = 0;
    int iOdd = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(icnt=1; icnt<=iNo; icnt++)
    {
            if ((icnt % 2) != 0)
            {
                iOdd = iOdd * icnt;
            }
            
        }
    return iOdd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("odd factorial of number is %d", iRet);
    return 0;
}