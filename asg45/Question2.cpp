#include<iostream> 
using namespace std;


template <class T>
int Frequency(T *Arr,int Length,T iNo){
    int iCnt=0;
    int Count=0;
    for(iCnt=0;iCnt<Length;iCnt++){
        if(Arr[iCnt]==iNo){
            Count++;
        }
    }

    return Count;
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

    iRet=Frequency(ptr1,size,10);
    cout<<"Frequency is : "<<iRet<<endl;

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

    fRet=Frequency(ptr,size,11.2f);
    cout<<"Frequency is : "<<fRet<<endl;


    delete []ptr;
    delete []ptr1;



    return 0;
}
