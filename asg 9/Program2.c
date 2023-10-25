#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float area = 0.0;
    area = fWidth * fHeight;

    return area;

}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("enter width");
    scanf("%f",&fValue1);

    printf("enter height");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("%f", dRet);

    return 0;
}