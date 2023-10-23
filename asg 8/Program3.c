#include<stdio.h>

int EvenFactorial(int iNo)
{
    int icnt = 0;
    int iEven = 1;
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
            
        }
    return iEven;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("even factorial of number is %d", iRet);
    return 0;
}