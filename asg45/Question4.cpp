#include<iostream> 
using namespace std;

template <class T>
int SearchLast(T *Arr,int size,T No){
    int i=0;
    int iPos=1;
    int Store=-1;
    for(i=0;i<size;i++){
        if(Arr[i]==No){
         Store=iPos;
        }
        iPos++;
    }
    return Store;
}

int main(){ 
    int size=0;
    int iCnt=0;
    int iRet=0;

    cout<<"-----------------Integer-------------------"<<endl;

    int *ptr1=NULL;
    cout<<"\nEnter number of elements : "<<endl;
    cin>>size;

    ptr1=new int[size];

    cout<<"Enter the elements : "<<endl;
    for(iCnt=0;iCnt<size;iCnt++){
        cin>>ptr1[iCnt];
    }

    iRet=SearchLast(ptr1,size,10);
    cout<<"Last Occuerrence is : "<<iRet<<endl;

    cout<<"-----------------Float-------------------"<<endl;

    float *ptr=NULL;
    float fRet=0;

    cout<<"\nEnter number of elements : "<<endl;
    cin>>size;

    ptr=new float[size];

    cout<<"Enter the elements : "<<endl;
    for(iCnt=0;iCnt<size;iCnt++){
        cin>>ptr[iCnt];
    }

    fRet=SearchLast(ptr,size,11.2f);
    cout<<"Last Occuerrence is : "<<fRet<<endl;


    delete []ptr;
    delete []ptr1;



    return 0;
}
