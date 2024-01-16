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

    void strlwrx(){
        char *ptr=str;
        while (*ptr!='\0'){
            if(*ptr>='A' && *ptr<='Z'){
                *ptr=*ptr+32;
            }
        ptr++;
        }
        cout<<str;
    }


};

int main(){ 
    String *sobj=new String();
    sobj->Accept();
    sobj->strlwrx();

    delete sobj;

    return 0;
}

