#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char Sch = 'a';
    char Cch = 'A';

    for( i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t", Cch);
                Cch++;
            }
            else
            {
                printf("%c\t", Sch);
                Sch++;
            }
        }
        Sch = 'a';
        Cch = 'A';
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