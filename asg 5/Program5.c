#include<stdio.h>

float Percentage(int iTotal, int iObatained)
{
    float fper = 0.0;

    if(iTotal < 0 || iObatained < 0 || iTotal < iObatained)
    {
        printf("invalid input\n");
        return fper;
    }

    fper = ((float)iObatained / (float)iTotal) * 100;
    return fper;
}
 
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("enter the total marks");
    scanf("%d", &iValue1);

    printf("enter the obtained marks");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("your percentage is %f", fRet);

    return 0;

}