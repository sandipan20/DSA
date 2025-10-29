#include<stdio.h>
#include<stdlib.h>
struct node* createnew(int);
void addst(struct node*);
void traverse();

struct node{
    int data;
    struct node* next;
}*p,*temp,*head=NULL;
int main()
{
    int a,ch;
    while(ch!=0)
    {
        printf("enter the no to be put in stack\n");
        scanf("%d",&a);
        p=createnew(a);
        addst(p);
        printf(" if you want to continiue press 1 other wise 0\n ");
        scanf("%d",&ch);
    }
    printf("the elements in stacks are\n ");
    traverse();
    return 0;
}
struct node* createnew(int a){
    p=(struct node*)malloc(sizeof(struct node));
    p->data=a;
    p->next=NULL;
    return p;
}
void addst( struct node* p){
    temp=head;
    if(head==NULL){
        head=p;
    }
    else{
        p->next=temp;
        head=p;
    }
}

void traverse()
{
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
