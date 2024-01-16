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
    bool chkChar(){
        while(*str!='\0'){
            if(*str==ch){
                return true;
            }
            str++;
        }
        return false;
    }

};

int main(){ 
    bool bRet=false;
    String *sobj=new String();
    sobj->Accept();
    bRet=sobj->chkChar();

    if(bRet==true){
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }

    delete sobj;


    return 0;
}