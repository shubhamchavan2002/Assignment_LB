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
    bool ChkAlpha(){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
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

    bRet=cobj->ChkAlpha();

    if(bRet==true){
        printf("It is Character");
    }
    else{
        printf("It is not a Character");
    }

    delete cobj;




    return 0;
}