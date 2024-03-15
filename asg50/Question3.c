#include<stdio.h>

int Small(char *str){
    static int count=0;
    if (*str!='\0')
    {
        if(*str>='a' && *str<='z'){
            count++;
        }
        str++;
        Small(str);
    }
    return count;
}

int main(){
    int iRet=0;
    char arr[20];
    printf("Enter string : \n");
    scanf("%[^'\n']s",&arr);

    iRet=Small(arr);
    printf("Small : %d\n",iRet);


    return 0;
}