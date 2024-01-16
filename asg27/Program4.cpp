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

    void DisplayDigit(){ 
        while (*str!='\0'){
            if(*str>='0' && *str<='9'){
                cout<<*str;
            }
        str++;
        }
    }


};

int main(){ 
    String *sobj=new String();
    sobj->Accept();
    sobj->DisplayDigit();

    delete sobj;

    return 0;
}

