#include<stdio.h>

void Display(int iNo){
    if(iNo>=1){
        printf("%d\t*\t",iNo);
        iNo--;
        Display(iNo);
    }
}

int main(){
    int iValue=0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}