#include<stdio.h>

void Display(int iNo)
{
    int icnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for ( icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*\t");
    }
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("#\t");
    }
    
}
int main()
{
    int iValue = 0;

    printf("enter number");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}