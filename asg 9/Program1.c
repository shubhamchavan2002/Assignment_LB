#include<stdio.h>

double CircleArea(float fRadius)
{
    float Pi = 3.14;

    return Pi * fRadius * fRadius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("%f",dRet);

    return 0;
}