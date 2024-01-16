#include<iostream> 
using namespace std;

class ASCII{
    private:
    char ch;
    public:
    ASCII(char X){
        ch=X;
    }
    void Ascii(){
        if(ch>='A' &&ch<='Z'){
            printf("Decimal : %d\n",ch);
            printf("Octal : %o\n",ch);
            printf("Hexadecimal : %x\n",ch);
        }
    }
    
};

int main(){ 
    char cValue='\0';
    
    cout<<"Enter the character : \n";
    cin>>cValue;

    ASCII *cobj=new ASCII(cValue);
    cobj->Ascii();

    delete cobj;

    return 0;
}