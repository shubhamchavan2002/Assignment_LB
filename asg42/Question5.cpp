#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

void DisplayN(char FName[],int iSize){
    char Arr[100] = {'\0'};
    int fd = 0 , iRet = 0;
    int i=0;

    fd = open(FName, O_RDWR);

    if(fd == -1)
    {
        cout<<"Unable to open "<<FName<<" file\n";
    }
    else
    {
        cout<<FName<<" gets opened succesfully\n";

        iRet=read(fd,Arr,iSize);
        cout<<Arr;

    }
}

int main()
{
    char FileName[30];
    int iValue=0;

    cout<<"Enter the name of file that you want to open from current directory : ";
    scanf("%s",FileName);

    
    cout<<"Enter the number of charachter : ";
    cin>>iValue;

    DisplayN(FileName,iValue);


    return 0;
}









