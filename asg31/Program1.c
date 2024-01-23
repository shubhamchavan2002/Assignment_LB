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
    printf(" NULL\n");
}

void Reverse(PNODE Head){
    int iDigit=0;
    while(Head!=0){
        while((Head->data)!=0){
            iDigit=(Head->data)%10;
            (Head->data)=(Head->data)/10;
            printf("%d",iDigit);
        }
        printf("\n");
        Head=Head->next;
    }
}

int main(){
   PNODE First=NULL;


   InsertFirst(&First,11);
   InsertFirst(&First,320);
   InsertFirst(&First,240);
   InsertFirst(&First,110);

   Display(First);

   Reverse(First);





    return 0;
}