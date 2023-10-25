#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int icnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
       if((icnt % 2) == 0)
       {
        printf("%d  ", icnt);
       }
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter stating point\n");
    scanf("%d", &iValue1);

    printf("enter ending point\n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);
    return 0;
}