#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*link;
};

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

int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=99;
    head->link=NULL;

    struct node* current=(struct node*)malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=(struct node*)malloc(sizeof(struct node));
    current->data=97;
    current->link=NULL;
    head->link->link=current;

    traverse(head);
    return 0;
}