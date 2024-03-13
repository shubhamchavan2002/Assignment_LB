#include<iostream> 
using namespace std;

template <class T>
T Min(T *Arr,int Length){
    T Smallest=Arr[0];
    int iCnt=0;


    for(iCnt=0;iCnt<Length;iCnt++){
        if(Arr[iCnt]<=Smallest){
            Smallest=Arr[iCnt];
        }
    }

    return Smallest;
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

    iRet=Min(ptr1,size);
    cout<<"Smallest elements is : "<<iRet<<endl;

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

    fRet=Min(ptr,size);
    cout<<"Smallest elements is : "<<fRet<<endl;


    delete []ptr;



    return 0;
}
