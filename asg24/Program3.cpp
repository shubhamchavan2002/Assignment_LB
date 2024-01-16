#include<iostream> 
#include<stdbool.h> 

using namespace std;

class Char{
    private:
    char ch;
    public:
    Char(char X){
        ch=X;
    }
    bool ChkDigit(){
        if((ch>='0') && (ch<='9')){
            return true;
        }
        return false;
    }
};

int main(){
    char cValue='\0';
    bool bRet=false;

    cout<<"Enter the Character : \n";
    cin>>cValue;

    Char *cobj=new Char(cValue);

    bRet=cobj->ChkDigit();

    if(bRet==true){
        printf("It is Digit");
    }
    else{
        printf("It is not a Digit");
    }

    delete cobj;




    return 0;
}