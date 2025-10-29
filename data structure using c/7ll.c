#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};

void print(struct node* head){
    if (head==NULL){
        printf("linked list is empty");
    }
    struct node*ptr= NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=98;
    new->link=NULL;
    head->link=new;

    new=(struct node*)malloc(sizeof(struct node));
    new->data=3;
    new->link=NULL;
    head->link->link=new;

    print(head);
    return 0;
}