#include<iostream> 
using namespace std;

template <class T>
void Display(T Value,int iSize){
    int iCnt=0;
    for(iCnt=1;iCnt<=iSize;iCnt++){
        cout<<Value<<" ";
    }
    cout<<endl;
}

int main(){ 
    Display(11,7);
    Display('M',3);
    Display(3.8,6);

    return 0;
}
