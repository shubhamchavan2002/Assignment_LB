#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int chk = 0;

    for(iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        chk++;
        if((chk % 2) == 0)
        {
            printf("%d\t", chk);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}