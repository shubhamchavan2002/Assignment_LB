#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int Count = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            Count = Count + 1;
        }
        iNo = iNo / 10;
    }
    return Count;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d", iRet);

    return 0;
}