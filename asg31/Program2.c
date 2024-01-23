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

void DisplayPalidrome(PNODE Head){
    int iDigit=0;
    int iRev=0;
    while(Head!=0){
        int iStore=Head->data;
        while((Head->data)!=0){
            iDigit=(Head->data)%10;
            iRev=(iRev*10)+iDigit;
            (Head->data)=(Head->data)/10;
        }
        if(iStore==iRev){
            printf("%d\t",iStore);
        }
        iRev=0;
        Head=Head->next;
    }
}

int main(){
   PNODE First=NULL;


   InsertFirst(&First,89);
   InsertFirst(&First,6);
   InsertFirst(&First,414);
   InsertFirst(&First,17);
   InsertFirst(&First,28);
   InsertFirst(&First,11);

   Display(First);

   DisplayPalidrome(First);





    return 0;
}