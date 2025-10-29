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

void traverse(struct node* head)
{
    int c=0;
    if(head==NULL)
    {
        printf("link list is empty");
        return;
    }
    struct node*ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->link;
    }
    printf("the no of count is %d",c);
}   

void addfunction(struct node*head,int data){
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;

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
    
    addfunction(head,67);
    print(head);
    traverse(head);

    return 0;
}