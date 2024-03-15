#include<stdio.h>

int WhiteSpace(char *str){
    static int count=0;
    if (*str!='\0')
    {
        if(*str==' '){
            count++;
        }
        str++;
        WhiteSpace(str);
    }
    return count;
}

int main(){
    int iRet=0;
    char arr[20];
    printf("Enter string : \n");
    scanf("%[^'\n']s",&arr);

    iRet=WhiteSpace(arr);
    printf("White Spaces : %d\n",iRet);


    return 0;
}