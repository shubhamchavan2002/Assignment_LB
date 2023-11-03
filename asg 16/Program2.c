#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr, iSize);

    printf("smallest number is %d", iRet);

    free(ptr);
    return 0;
}