#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
    printf(" NULL\n");
}


void Prime(PNODE Head){

    while(Head!=NULL){
        int iCnt=0;
        bool isPrime=true;
        int iNo=Head->data;
        for(iCnt=2;iCnt<=(iNo/2);iCnt++){
            if(iNo%iCnt==0){
                isPrime=false;
            }
        }
        if(isPrime==true){
            printf("%d\t",iNo);
        }
        Head=Head->next;
    }

}

int main(){
   PNODE First=NULL;

   InsertFirst(&First,89);
   InsertFirst(&First,22);
   InsertFirst(&First,41);
   InsertFirst(&First,17);
   InsertFirst(&First,20);
   InsertFirst(&First,11);

   Display(First);

   Prime(First);





    return 0;
}