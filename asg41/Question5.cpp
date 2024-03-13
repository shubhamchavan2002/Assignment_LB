#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

int main(){
    int fd=0;
    char FileName[30];
    int iRet=0;
    char Arr[100]={'\0'};

    cout<<"Enter the name of file that you want to open from current directory : \n";
    scanf("%s",FileName);

    
    fd=open(FileName,O_RDWR | O_APPEND);

    if(fd==-1){
        cout<<"Unable to open file";
    }
    else{
        cout<<FileName<<" gets succesfully open with the fd : "<<fd<<endl;

        cout<<"Enter the data that you want to write into the file : \n";
        scanf(" %[^'\n']s",Arr);

       iRet=write(fd,Arr,strlen(Arr));
       cout<<iRet<<" bytes gets succesfully written into the file\n";

        close(fd);
    }

    return 0;
}