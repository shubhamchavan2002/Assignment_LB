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


int AdditionEven(PNODE Head){
    int iSum=0;

    while(Head!=NULL){
        if((Head->data)%2==0){
            iSum=iSum+(Head->data);
        }
        Head=Head->next;
    }
    return iSum;

}

int main(){
   PNODE First=NULL;
   int iRet=0;

   InsertFirst(&First,89);
   InsertFirst(&First,22);
   InsertFirst(&First,41);
   InsertFirst(&First,17);
   InsertFirst(&First,20);
   InsertFirst(&First,11);

   Display(First);

   iRet=AdditionEven(First);
   printf("\nAddition of even numbers : %d",iRet);




    return 0;
}