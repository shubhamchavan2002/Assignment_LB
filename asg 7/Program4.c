#include<stdio.h>

void Table(int iNo)
{
    int icnt =  0;
    int itable = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(icnt = 1; icnt <= 10; icnt++)
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

    Table(iValue);
    return 0;
}