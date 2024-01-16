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
    void DisplaySchedule(){
        switch (ch)
        {
        case 'A':
        cout<<"Your exam at 7 AM"<<endl;
            break;
        case 'B':
        cout<<"Your exam at 8.30 AM"<<endl;
            break;
        case 'C':
        cout<<"Your exam at 9.20 AM"<<endl;
            break;
        case 'D':
        cout<<"Your exam at 10.30 AM"<<endl;
            break;

        }
    }
};

int main(){
    char cValue='\0';

    cout<<"Enter the Character : \n";
    cin>>cValue;

    Char *cobj=new Char(cValue);

    cobj->DisplaySchedule();


    delete cobj;




    return 0;
}