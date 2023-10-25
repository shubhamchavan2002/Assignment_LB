#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int icnt = 0;
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for (icnt = iStart; icnt <= iEnd; icnt++)
    {
       printf("%d  ", icnt);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter stating point\n");
    scanf("%d", &iValue1);

    printf("enter ending point\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);
    
    return 0;
}