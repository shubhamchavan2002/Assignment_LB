#include<iostream> 
using namespace std;

class String{
    private:
    char *str;
    int iSize;
    public:
    String(){
        iSize=50;
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
        cout<<"Enter the String :\n";
        cin.getline(str,iSize);
    }
    int Difference(){
        int iCountCapital=0;
        int iCountSmall=0;
        while(*str!='\0'){
            if(*str>='A' && *str<='Z'){
                iCountCapital++;
            }
            else if(*str>='a' && *str<='z'){
                iCountSmall++;
            }
            *str++;
        }
        return iCountSmall-iCountCapital;
    }
};

int main(){ 
    int iRet=0;
    String *sobj=new String();
    sobj->Accept();
    iRet=sobj->Difference();
    cout<<"Count the Capital - Small Character : "<<iRet;

    delete sobj;


    return 0;
}