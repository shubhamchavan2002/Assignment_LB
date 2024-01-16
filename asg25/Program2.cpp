#include<iostream> 
using namespace std;

class Char{
    private:
    char ch;
    public:
    Char(char X){
        ch=X;
    }
    void Display(){
        if(ch>='A'&&ch<='Z'){
            ch=ch+32;
            cout<<ch;
        }
        else if(ch>='a'&&ch<='z'){
            ch=ch-32;
            cout<<ch;
        }
        else{
            cout<<ch;
        }
    }
};

int main(){ 
    char cValue='\0';

    cout<<"Enter the character : \n";
    cin>>cValue;

    Char *cobj=new Char(cValue);
    cobj->Display();

    delete cobj;

    return 0;
}