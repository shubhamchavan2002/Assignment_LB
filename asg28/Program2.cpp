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
    int CountChar(){
        int iCount=0;
        while(*str!='\0'){
            if(*str==ch){
                iCount++;
            }
            str++;
        }
        return iCount;
    }

};

int main(){ 
    int iRet=0;
    String *sobj=new String();
    sobj->Accept();
    iRet=sobj->CountChar();

    cout<<iRet<<endl;

    

    delete sobj;


    return 0;
}