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

    void Reverse(){
        char Arr[iSize];
        int iCnt=0;
        while (*str!='\0')
        {
            Arr[iCnt]=*str;
            str++;
            iCnt++;
        }
        for(int i=iCnt-1;i>=0;i--){
            cout<<Arr[i];
        }
        
    }



};

int main(){ 
    String *sobj=new String();
    sobj->Accept();
    sobj->Reverse();
  
    
  
    delete sobj;


    return 0;
}