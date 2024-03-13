#include<iostream> 
using namespace std;

template <class T>
int SearchFirst(T *Arr,int size,T No){
    int i=0;
    int iPos=1;
    for(i=0;i<size;i++){
        if(Arr[i]==No){
         break;
        }
        iPos++;
    }
    return iPos;
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

    iRet=SearchFirst(ptr1,size,10);
    cout<<"First Occuerrence is : "<<iRet<<endl;

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

    fRet=SearchFirst(ptr,size,11.2f);
    cout<<"First Occuerrence is : "<<fRet<<endl;


    delete []ptr;
    delete []ptr1;



    return 0;
}
