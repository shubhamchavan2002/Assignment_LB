#include<stdio.h>

int Fact(int iNo){
    static int iFact=1;
    static int iCnt=1;
    while(iCnt<=iNo){
        iFact=iFact*iCnt;
        iCnt++;
        Fact(iNo);
    }

    return iFact;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=Fact(iValue);
    printf("Factorial : %d\n",iRet);


    return 0;
}