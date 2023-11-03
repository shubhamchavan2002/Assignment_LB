#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int LastOcc = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            LastOcc = iCnt;
            
        }
       
    }
    return LastOcc;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("enter number of elements: ");
    scanf("%d", &iSize);

    printf("enter the number you want to check: ");
    scanf("%d", &iValue);

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
    
    iRet = LastOcc(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("there is no such number");
    }
    else
    {
        printf("Last occurence of number is: %d", iRet);
    }

    free(ptr);

    return 0;
}