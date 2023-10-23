#include<stdio.h>

void TableRev(int iNo)
{
    int icnt =  0;
    int itable = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 10; icnt >= 1; icnt--)
    {
         itable = icnt*iNo;
         printf("%d ", itable);
    }
}

int main()
{
    int iValue = 0;

    printf("enter number");
    scanf("%d",&iValue);

    TableRev(iValue);
    return 0;
}