#include<stdio.h>

double SqureMeter(int iValue)
{
    float iSqrMeter = 0.0;
    double SqrFeet = 0.0929;

    iSqrMeter = iValue * SqrFeet;

    return iSqrMeter;

}
int main()
{
    int iValue1 = 0;
    double dRet = 0.0;

    printf("Enter area in squre feet");
    scanf("%d",&iValue1);

    dRet = SqureMeter(iValue1);

    printf("convert to squre meter is %f", dRet);

    return 0;
}