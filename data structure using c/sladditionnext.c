#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
}*p,*temp,*head=NULL;

struct node*createnew(int);
void enqueue(struct node* );
void traverse();
void addafter(int);

int main(){
    // struct node*head=(struct node*)malloc(sizeof(struct node));
int a,ch=1,item;
while(ch!=0){
    printf("\nenter the no");
    scanf("%d",&a);
    p=createnew(a);
    enqueue(p);
    printf("\n press 1 for enter again otwerwise 0\n");
    scanf("%d",&ch);

}
printf("\n the list is ");
traverse();
printf("enter the information of the new node \n");
scanf("%d",&a);
p=createnew(a);
printf("enter the node after which you want to add the new node\n");
scanf("%d",&item);
addafter(item);
printf("after addition the list is ");
traverse();
return 0;
}

struct node* createnew(int a){
    p=(struct node*)malloc(sizeof(struct node));
    p->data=a;
    p->next=NULL;
    return p;
}

void enqueue(struct node* p){
    temp=head;
    if(head==NULL){
        head=p;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
    }
}

void traverse(){
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void addafter(int item){
    temp=head;
    while(temp!=NULL){
        if(temp->data==item){
            p->next=temp->next;
            temp->next=p;

        }temp=temp->next;
    }
}