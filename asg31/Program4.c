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

void DisplaySmall(PNODE Head){
    int iDigit=0;

    while(Head!=0){
        int iSmall=9;
        while((Head->data)!=0){
            iDigit=(Head->data)%10;
            if(iSmall>iDigit){
                iSmall=iDigit;
            }
            (Head->data)=(Head->data)/10;
        }
       printf("%d\t",iSmall);
       iDigit=0;
       iSmall=0;
        Head=Head->next;
    }
}

int main(){
   PNODE First=NULL;

   InsertFirst(&First,415);
   InsertFirst(&First,532);
   InsertFirst(&First,250);
   InsertFirst(&First,11);

   Display(First);

   DisplaySmall(First);





    return 0;
}