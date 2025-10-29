#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void addfunction(struct node *head, int data) {
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void add_at_position(struct node *head, int data, int pos) {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    struct node *ptr = head;
    int p = 1;

    while (p < pos - 1 && ptr != NULL) {
        ptr = ptr->link;
        p++;
    }

    if (ptr != NULL) {
        temp->link = ptr->link;
        ptr->link = temp;
    } else {
        printf("Position out of range\n");
        free(temp);
    }
}

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    addfunction(head, 98);
    addfunction(head, 3);

    int data = 67, position = 3;

    add_at_position(head, data, position);

    struct node *ptr = head;

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
