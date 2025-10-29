#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
}*p,*r,*temp,*head=NULL;

struct node*createnew(int);
void enqueue(struct node* );
void traverse();
void delete();
void lastdelete();
void delat(int);



int main(){
    // struct node*head=(struct node*)malloc(sizeof(struct node));
int a,ch=1,item,item2;
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
delete();
lastdelete();
traverse();
printf("enter the node to delete ");
scanf("%d",&item);
delat(item);
printf("after deletion of first node the lis is ");
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

void delete(){
    temp=head;
    if(head==NULL){
        printf("deletion is not possible\n");
    }
    else{
        head=head->next;
        free(temp);
    }
}

void lastdelete(){
    temp=head;
    if(head==NULL){
        printf("deletion not possible");
    }
    else{
        while(temp->next!=NULL){
            r=temp;
            temp=temp->next;
        }
        r->next=NULL;
        free(temp);
    }
}

void delat(int item){
    r=temp=head;
    if(head==NULL){
        printf("underflow");
    }
    else if(temp->data==item){
        head=head->next;
        free(temp);
    }
    else{
        while(temp!=NULL){
            if(temp->data==item){
                r->next=temp->next;
                free(temp);
            }
            r=temp;
            temp=temp->next;
        }
    }
}