#include<iostream> 
using namespace std;

class String{
    private:
    int iSize;
    char *str;
    char ch;
    public:
    String(){
        iSize=30;
        str=new char[iSize];
    }
    String(int X){
        iSize=X;
        str=new char[iSize];
    }
    ~String(){
        delete []str;
    }
    void Accept(){
        cout<<"Enter the String : \n";
        cin.getline(str,iSize);
        cout<<"Enter the charachter"<<endl;
        cin>>ch;
    }
    int FirstChar(){
        int iFirstOcc=0;
        while(*str!='\0'){
            if(*str==ch){
                return iFirstOcc;
            }
            iFirstOcc++;
            str++;
        }
        return -1;
    }

};

int main(){ 
    int iRet=0;
    String *sobj=new String();
    sobj->Accept();
    iRet=sobj->FirstChar();

    cout<<iRet<<endl;

    delete sobj;


    return 0;
}