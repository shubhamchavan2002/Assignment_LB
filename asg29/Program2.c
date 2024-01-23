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

int SearchLastOcc(PNODE Head,int iNo){
    int iPos=-1;
    int iCnt=1;
    if(Head==NULL){
        return -1;
    }
    while(Head!=NULL){
        if((Head->data)==iNo){
            iPos=iCnt;
        }
        Head=Head->next;
        iCnt++;
    }
    return iPos;
}

int main(){
   PNODE First=NULL;
   int iRet=0;

   InsertFirst(&First,70);
   InsertFirst(&First,30);
   InsertFirst(&First,50);
   InsertFirst(&First,40);
   InsertFirst(&First,30);
   InsertFirst(&First,20);
   InsertFirst(&First,10);

   Display(First);

   iRet=SearchLastOcc(First,30);
   printf("\nLast Occurrence : %d",iRet);





    return 0;
}