#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

int CountWhiteSpaces(char FName[]){
    char Arr[100] = {'\0'};
    int fd = 0 , iRet = 0;
    int i=0,iCount=0;

    fd = open(FName, O_RDWR);

    if(fd == -1)
    {
        cout<<"Unable to open "<<FName<<" file\n";
    }
    else
    {
        cout<<FName<<" gets opened succesfully\n";
        

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i=0;i<iRet;i++)  
            {
                if(Arr[i]==' '){
                    iCount++;
                }
            }
        }

    }

   return iCount;
}

int main()
{
    char FileName[30];
    int iAns=0;

    cout<<"Enter the name of file that you want to open from current directory : ";
    scanf("%s",FileName);

    iAns=CountWhiteSpaces(FileName);

    cout<<"Number of White Spaces in the file are : "<<iAns;


    return 0;
}






