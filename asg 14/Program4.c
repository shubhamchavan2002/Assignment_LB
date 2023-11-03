#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int Count = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Count++;
        }
    }
    return Count;
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
    
    iRet = Frequency(ptr, iSize);

    printf("result is : %d\n", iRet);

    free(ptr);

    return 0;
}