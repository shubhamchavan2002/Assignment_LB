#include<iostream> 
using namespace std;

class Array{
    private:
    int *Arr;
    int size;

    public:
    Array(int length);
    ~Array();
    void Accept();
    void Display();
    int Frequency(int iValue);
    int SearchFirst(int iValue);
    int SearchLast(int iValue);
    int EvenCount();
    int OddCount();
    int SumAll();

};


Array :: Array(int length){
    this->size=length;
    Arr=new int[size];
}
Array ::  ~Array(){
    delete []Arr;
}
void Array ::  Accept(){
    cout<<"Please enter the elememts : "<<endl;
    for(int i=0;i<size;i++){
        cin>>Arr[i];
    }
}
void Array ::  Display(){
    cout<<"The elememts are : "<<endl;
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}
int Array ::  Frequency(int iValue){
    int iCount=0;
    for(int i=0;i<size;i++){
        if(Arr[i]==iValue){
        iCount++;
        }
    }
    return iCount;
}
int Array ::  SearchFirst(int iValue){
    int i=0;
    int iPos=1;
    for(i=0;i<size;i++){
        if(Arr[i]==iValue){
         break;
        }
        iPos++;
    }
    return iPos;
}
int Array ::  SearchLast(int iValue){
    int i=0;
    int iPos=1;
    int iStore=-1;
    for(i=0;i<size;i++){
        if(Arr[i]==iValue){
         iStore=iPos;
        }
        iPos++;
    }
    return iStore;
}
int Array ::  EvenCount(){
    int iEvenCount=0;
    for(int i=0;i<size;i++){
        if(Arr[i]%2==0){
            iEvenCount++;
        }
    }
    return iEvenCount;
}
int Array ::  OddCount(){
    int iOddCount=0;
    for(int i=0;i<size;i++){
        if(Arr[i]%2!=0){
            iOddCount++;
        }
    }
    return iOddCount;
}
int Array ::  SumAll(){
    int iSum=0;
    for(int i=0;i<size;i++){
        iSum=iSum+Arr[i];
    }
    return iSum;
}


int main(){ 
    int iRet=0;
    Array obj(5);
    obj.Accept();
    obj.Display();

    iRet=obj.Frequency(11);
    cout<<"Frequecy is : "<<iRet<<endl;

    iRet=obj.SearchFirst(11);
    cout<<"first occuernce is : "<<iRet<<endl;

    iRet=obj.SearchLast(11);
    cout<<"last occuernce is : "<<iRet<<endl;

    iRet=obj.EvenCount();
    cout<<"Even count is : "<<iRet<<endl;

    iRet=obj.OddCount();
    cout<<"Odd count is : "<<iRet<<endl;

    iRet=obj.SumAll();
    cout<<"Sum of all number is : "<<iRet<<endl;








    return 0;
}
