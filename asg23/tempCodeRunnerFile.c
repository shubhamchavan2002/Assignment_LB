#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;

    for( i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= i; j--)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        for(k = 1; k <= i; k++)
        {
            printf("@\t");
        }
        
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter the rows and colunms: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
