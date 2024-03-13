#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

using namespace std;

int main(){
    int fd=0;

    fd=creat("Aniket.txt",077);
    

    if(fd==-1){
        cout<<"Unable to create file";
    }
    else{
        cout<<"File created succesfully with the fd : "<<fd;
        close(fd);
    }

    return 0;
}