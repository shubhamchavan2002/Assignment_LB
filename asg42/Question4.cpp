#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

int CountChar(char FName[],char ch){
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
                if(Arr[i]==ch){
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
    char ch='\0';

    cout<<"Enter the name of file that you want to open from current directory : ";
    scanf("%s",FileName);

    
    cout<<"Enter the charachter that you want to check : ";
    cin>>ch;


    iAns=CountChar(FileName,ch);

    cout<<"Frequency is : "<<iAns;


    return 0;
}






