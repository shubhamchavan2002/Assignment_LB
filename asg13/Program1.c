#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLen)
{
    int iCnt = 0;
    int iEvenSum=0;
    int iOddSum=0;

    for(iCnt=0;iCnt<iLen;iCnt++){
        if((Arr[iCnt]%2)==0){
            iEvenSum=iEvenSum+Arr[iCnt];
        }
        else{
            iOddSum=iOddSum+Arr[iCnt];
        }
    }

    return iEvenSum-iOddSum;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("enter number of elements");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter %d elements :\n", iSize);

    for ( iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter elements : %d \n", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = Difference(ptr, iSize);

    printf("result is : %d\n", iRet);

    free(ptr);

    return 0;
}