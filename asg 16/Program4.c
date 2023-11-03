#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;
    int iValue=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        iValue=Arr[iCnt];
    while(Arr[iCnt]>0){
        iDigit=Arr[iCnt]%10;
        Arr[iCnt]=Arr[iCnt]/10;
        iCount++;
    }
    if(iCount==3){
        printf("%d\t",iValue);
    }
    iCount=0;
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("enter number of elements: ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter %d elements\n", iSize);

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("enter element: %d\n", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    Digits(ptr, iSize);

    free(ptr);
    return 0;
}