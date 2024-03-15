#include<stdio.h>

int Strlen(char *str){
    static int count=0;
    if(*str!='\0')
    {
        count++;
        str++;
        Strlen(str);
    }
    return count;
}

int main(){
    int iRet=0;
    char arr[20];
    printf("Enter string : \n");
    scanf("%[^'\n']s",&arr);

    iRet=Strlen(arr);
    printf("Length : %d\n",iRet);


    return 0;
}