#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int icnt = 0;
    int iSum = 0;
    
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
        iSum = iSum + icnt;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("enter stating point\n");
    scanf("%d", &iValue1);

    printf("enter ending point\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iValue1 > iValue2 || iValue1 < 0 || iValue2 < 0)
    {
        printf("Invalid Range");
    }else
    {
    printf("addition is : %d", iRet);
    }
    return 0;
}