#include<iostream> 
using namespace std;


template <class T>
T multiply(T No1,T No2){
    T ans;
    ans=No1*No2;
    return ans;
}

int main(){ 
    int iRet=0;
    iRet=multiply(10,20);
    cout<<iRet<<endl;

    
    float fRet=0.0f;
    fRet=multiply(1.2f,2.1f);
    cout<<fRet<<endl;




    return 0;
}
