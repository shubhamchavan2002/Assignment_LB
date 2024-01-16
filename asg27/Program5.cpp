#include<iostream> 
using namespace std;

class String{
    private:
    int iSize;
    char *str;
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
        cout<<"Enter the string : ";
        cin.getline(str,iSize);
    }

    int CountWhite(){ 
        int iCount=0;
        while (*str!='\0'){
            if(*str==' '){
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
    iRet=sobj->CountWhite();

    cout<<iRet<<endl;

    delete sobj;

    return 0;
}

