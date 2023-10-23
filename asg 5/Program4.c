#include<stdio.h>


int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;

    if(iNo1 == 0 && iNo2 == 0)
    {
        return iNo3;
    }
    if(iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    if(iNo1 == 0 && iNo3 == 0)
    {
        return iNo2;
    }
    if(iNo1 == 0)
    {
        return iNo2 * iNo3;
    }
    if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }
    if(iNo3 == 0)
    {
        return iNo1 * iNo2;
    }
    iMul = iNo1*iNo2*iNo3;
   return iMul;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;
    printf("enter three number ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("multiplication is %d ", iRet);
    return 0;
}