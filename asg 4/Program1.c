#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int mult = 1;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            mult = mult * iCnt;
        }
    }
    return mult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);
    return 0;
}