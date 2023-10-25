#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int icnt = 0;
    int iSum = 0;
    if(iStart > iEnd )
    {
        printf("invalid range");
    }
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
        if((icnt % 2) == 0)
        {
            iSum = iSum + icnt;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);
    if(iValue1 > iValue2 || iValue1 < 0 || iValue2 < 0)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("addition is : %d", iRet);
    }
    return 0;
}