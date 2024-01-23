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

int Minimum(PNODE Head){
    int iMin=Head->data;
    
    while(Head!=NULL){
        if(iMin>=Head->data){
            iMin=Head->data;
        }
        Head=Head->next;
    }
    return iMin;
}

int main(){
   PNODE First=NULL;
   int iRet=0;

   InsertFirst(&First,240);
   InsertFirst(&First,320);
   InsertFirst(&First,230);
   InsertFirst(&First,110);

   Display(First);

   iRet=Minimum(First);
   printf("\nMinimum : %d",iRet);





    return 0;
}