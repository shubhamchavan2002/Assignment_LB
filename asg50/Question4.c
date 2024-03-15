#include<stdio.h>
#include<limits.h>

int Min(int iNo){
    int iDigit=0;
    static int iMin=INT_MAX;
    if(iNo!=0){
        iDigit=iNo%10;
        if(iMin>iDigit){
            iMin=iDigit;
        }
        iNo=iNo/10;
        Min(iNo);
    }

    return iMin;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet=Min(iValue);
    printf("Minimum  : %d\n",iRet);


    return 0;
}