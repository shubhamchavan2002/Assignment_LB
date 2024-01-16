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
    bool ChkVowel(){
        while(*str!='\0'){
            if(*str=='a' || *str=='e' || *str=='i' ||*str=='o' || *str=='u' || *str=='A' || *str=='E' || *str=='I' ||*str=='O' || *str=='U'){
                return true;
            }
            *str++;
        }
        return false;
    }
};

int main(){ 
    int bRet=0;
    String *sobj=new String();
    sobj->Accept();
    bRet=sobj->ChkVowel();
    if(bRet==true){
        cout<<"Contains Vowel\n";
    }
    else{
        cout<<"There is no Vowel\n";
    }

    delete sobj;


    return 0;
}