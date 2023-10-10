#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i=1; i<=iFrequency; i++)
    {
        printf("%d\n", iNo);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("enter number ");
    scanf("%d", &iValue1);

    printf("enter frequency ");
    scanf("%d", &iValue2);

    Display(iValue1,iValue2);

    return 0;
}