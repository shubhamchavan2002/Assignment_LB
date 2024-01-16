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
    bool ChkSmall(){
        if((ch>='a') && (ch<='z')){
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

    bRet=cobj->ChkSmall();

    if(bRet==true){
        printf("It is Small Character");
    }
    else{
        printf("It is not a Small Character");
    }

    delete cobj;




    return 0;
}