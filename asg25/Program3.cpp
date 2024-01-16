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
        char cVal='\0';
        if(ch>='A' && ch<='Z'){
            for(cVal=ch;cVal<='Z';cVal++){
                cout<<cVal<<"\t";
            }
        }
        else if(ch>='a' && ch<='z'){
            for(cVal=ch;cVal>='a';cVal--){
                cout<<cVal<<"\t";
            }
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




