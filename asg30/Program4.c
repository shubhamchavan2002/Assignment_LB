#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int iNo){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*Head==NULL){
        *Head=newn;
    }
    else{
        newn->next=*Head;
        *Head=newn;
    }
}

void Display(PNODE Head){
    printf("LL contains : \n");
    while(Head!=NULL){
        printf("| %d |->",Head->data);
        Head=Head->next;
    }
    printf(" NULL");
}

int SecondMaximum(PNODE Head){
    int iMax=Head->data;
    int iMaxSec=0;
    while(Head!=NULL){
        if(iMax<=Head->data){
            iMaxSec=iMax;
            iMax=Head->data;
        }
        else if(iMaxSec<Head->data && iMax>(Head->data)){
            iMaxSec=Head->data;
        }
        Head=Head->next;
    }
    return iMaxSec;
}

int main(){
   PNODE First=NULL;
   int iRet=0;

   InsertFirst(&First,230);
   InsertFirst(&First,320);
   InsertFirst(&First,240);
   InsertFirst(&First,110);

   Display(First);

   iRet=SecondMaximum(First);
   printf("\nMaximum : %d",iRet);





    return 0;
}