#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int icnt = 0;
    int iCount = 0;

    for(icnt = 0; icnt < iLength; icnt++)
    {
        if((Arr[icnt] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
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
    
    iRet = CountEven(ptr, iSize);

    printf("result is : %d\n", iRet);

    free(ptr);

    return 0;
}