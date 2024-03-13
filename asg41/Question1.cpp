#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

int main(){
    int fd=0;
    char FileName[30];

    cout<<"Enter the name of file that you want to open from current directory : \n";
    scanf("%s",FileName);

    
    fd=open(FileName,O_RDONLY);

    if(fd==-1){
        cout<<"Unable to open file";
    }
    else{
        cout<<FileName<<" gets succesfully open with the fd :"<<fd;
        close(fd);
    }

    return 0;
}