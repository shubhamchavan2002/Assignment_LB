#include<stdio.h>
#include<stdlib.h>

void Difference(int Arr[], int iLen)
{
    int iCnt = 0;

    for(iCnt=0;iCnt<iLen;iCnt++){
        if((Arr[iCnt]%5)==0){
            printf("%d\t",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0;
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

     Difference(ptr, iSize);

    free(ptr);

    return 0;
}