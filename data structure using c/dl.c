#include<stdlib.h>
#include<stdio.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
}*p,*temp,*head=NULL;

struct node* createnew(int);
void addnode(struct node* );
void traverse();


int main(){
int a,ch=1;
while(ch!=0){
    printf("enter the no of the first dl\n");
    scanf("%d",&a);
    p=createnew(a);
    addnode(p);
    printf("to enter another nnode press 1 otherwise 0");
    scanf("%d",&ch);
}
printf("the entered dl is \n");
traverse();

    return 0;
}

struct node* createnew(int a){
    p=(struct node*)malloc(sizeof(struct node));
    p->data=a;
    p->prev=NULL;
    p->next=NULL;
    return p;
}

void addnode(struct node * p){
    temp=head;
    if(head==NULL){
        head=p;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        p->prev=temp;
    }
}

void traverse(){
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}