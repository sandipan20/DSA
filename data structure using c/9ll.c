// inserting node in the begining
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};

struct node *add_beg(struct node*head,int d){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link= head;
    head=ptr;
    return head;
}

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=NULL;

    head->link=ptr;

    int d=3;
    head=add_beg(head,d);
    ptr=head;
    
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
    return 0;
}