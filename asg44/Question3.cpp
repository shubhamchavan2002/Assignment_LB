#include<iostream> 
using namespace std;

template <class T>
T Addition(T *Arr,int Length){
    T Sum;
    int iCnt=0;

    for(iCnt=0;iCnt<Length;iCnt++){
        Sum=Sum+Arr[iCnt];
    }

    return Sum;
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

    iRet=Addition(ptr1,size);
    cout<<"Addition of all elements is : "<<iRet<<endl;

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

    fRet=Addition(ptr,size);
    cout<<"Addition of all elements is : "<<fRet<<endl;


    delete []ptr;



    return 0;
}
