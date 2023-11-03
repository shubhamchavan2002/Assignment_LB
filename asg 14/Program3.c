#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
            break;
        }
    }
            return FALSE;
}
int main()
{
    int iSize = 0, iRet = 0, icnt = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("enter the number of elements: ");
    scanf("%d", &iSize);

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

    bRet = Check(ptr, iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(ptr);
    return 0;
}