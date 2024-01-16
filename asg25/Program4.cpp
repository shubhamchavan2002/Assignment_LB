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
    bool ChkSpecial(){
        if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') || (ch=='^') ||(ch=='&') || (ch=='*')){
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

    bRet=cobj->ChkSpecial();

    if(bRet==true){
        printf("It is Special Character");
    }
    else{
        printf("It is not a Special Character");
    }

    delete cobj;

    


    return 0;
}