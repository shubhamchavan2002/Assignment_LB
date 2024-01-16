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
    bool ChkCapital(){
        if((ch>='A') && (ch<='Z')){
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

    bRet=cobj->ChkCapital();

    if(bRet==true){
        printf("It is Capital Character");
    }
    else{
        printf("It is not a Capital Character");
    }

    delete cobj;




    return 0;
}