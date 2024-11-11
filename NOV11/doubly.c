#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL, *tail = NULL;

void create() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;

    if (head == NULL) {
        head = tail = newnode;
    } else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void insert_at_begin() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = head;
    
    if (head != NULL) {
        head->prev = newnode;
    }
    
    head = newnode;
}

void insert_end() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->prev = tail;
    newnode->next = NULL;

    if (tail != NULL) {
        tail->next = newnode;
    } else {
       head=newnode;
    }
}

void delete_at_begin() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    struct node *temp = head;
    head = head->next;
    
    if (head != NULL) {
        head->prev = NULL;
    } else {
        tail = NULL; 
    }
    
    free(temp);
}

void delete_at_end() {
    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = tail;
    tail = tail->prev;
    
    if (tail != NULL) {
        tail->next = NULL;
    } else {
        head = NULL; 
    }

    free(temp);
}

void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("\nEnter your choice:\n");
        printf("1. Create\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at end\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at end\n");
        printf("6. Display\n");
        printf("0. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insert_at_begin();
                break;
            case 3:
                insert_end();
                break;
            case 4:
                delete_at_begin();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                display();
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
