#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
   int iCnt = 0;
   int iPro = 1;

   for(iCnt=0; iCnt < iLength; iCnt++)
   {
        if((Arr[iCnt] %2) != 0)
        {
            iPro = iPro * Arr[iCnt];
            
        }
   }
   return iPro;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("enter number of elements: ");
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
    
    iRet = Product(ptr, iSize);

    printf("Product is %d", iRet);

    free(ptr);

    return 0;
}