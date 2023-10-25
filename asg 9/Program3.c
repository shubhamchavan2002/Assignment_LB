#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConvert = 0;
    int iCnt = 1000;

    iConvert = iNo * iCnt;

    return iConvert;

}
int main()
{
    int iVlaue1 = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d",&iVlaue1);

    iRet = KMtoMeter(iVlaue1);

    printf("distance in meter is %d", iRet);

    return 0;
}