#include<stdio.h>

void printEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    
    int iCnt = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
 
    int iValue = 0;
    printf("enter the number");
    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}