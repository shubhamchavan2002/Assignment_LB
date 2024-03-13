#include<iostream> 
using namespace std;

template <class T>
void Reverse(T *Arr,int size){
    int iCnt=0;
    for(iCnt=size-1;iCnt>=0;iCnt--){
        cout<<Arr[iCnt]<<" ";
    }
    cout<<endl;
}

int main(){ 
    int size=0;
    int iCnt=0;

    cout<<"-----------------Integer-------------------"<<endl;

    int *ptr1=NULL;
    cout<<"\nEnter number of elements : "<<endl;
    cin>>size;

    ptr1=new int[size];

    cout<<"Enter the elements : "<<endl;
    for(iCnt=0;iCnt<size;iCnt++){
        cin>>ptr1[iCnt];
    }

    Reverse(ptr1,size);

    cout<<"-----------------Float-------------------"<<endl;

    float *ptr=NULL;

    cout<<"\nEnter number of elements : "<<endl;
    cin>>size;

    ptr=new float[size];

    cout<<"Enter the elements : "<<endl;
    for(iCnt=0;iCnt<size;iCnt++){
        cin>>ptr[iCnt];
    }

    Reverse(ptr,size);


    delete []ptr;
    delete []ptr1;



    return 0;
}
