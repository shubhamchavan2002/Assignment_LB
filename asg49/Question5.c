#include<stdio.h>

int Mult(int iNo){
    static int Multi=1;
    int iDigit=0;
    if(iNo!=0){
        iDigit=iNo%10;
        Multi=Multi*iDigit;
        iNo=iNo/10;
        Mult(iNo);
    }

    return Multi;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=Mult(iValue);
    printf("Multiplication : %d\n",iRet);


    return 0;
}