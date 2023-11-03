#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
            break;
        }
    }
            return FALSE;
}
int main()
{
    int iSize = 0, iRet = 0, icnt = 0, iValue = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("enter the number of elements: ");
    scanf("%d", &iSize);

    printf("enter the number you want to check: ");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter %d elements\n", iSize);

    for(icnt = 0; icnt < iSize; icnt++)
    {
        printf("enter %d element: ", icnt+1);
        scanf("%d", &ptr[icnt]);
    }

    bRet = Check(ptr, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is Present", iValue);
    }
    else
    {
        printf("%d is not Present", iValue);
    }

    free(ptr);
    return 0;
}