#include<iostream> 
using namespace std;

class ASCII{
    public:
    void Ascii(){
        int iCnt=0;

        cout<<"Dec     Hex     Octal   Char"<<endl;
        for(iCnt=0;iCnt<=127;iCnt++){
            printf("%d\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
        }
    }
};

int main(){ 
    ASCII *aobj=new ASCII();
    aobj->Ascii();

    return 0;
}