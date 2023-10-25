#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iCelsius = 0.0;

    iCelsius = ((fTemp - 32) * 5) / 9;

    return iCelsius;
}
int main()
{
    float fValue1 = 0.0;
    double dRet = 0.0;

    printf("Enter temp in fahrenheit");
    scanf("%f",&fValue1);

    dRet = FhtoCs(fValue1);

    printf("temp in celsius is %f", dRet);

    return 0;
}