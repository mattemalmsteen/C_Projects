#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *createNode(int data);
struct node *addBeg(struct node *head, int data);
struct node *addEnd(struct node *head, int data);
void displayList(struct node *head);
void search(struct node *head, int element);
struct node *delEl(struct node *head, int element);

int main(){
    struct node *head;
    int choice, num, data, element;

    while(1){
        printf("\n\n");
        printf("1. Create a SSL\n");
        printf("2. Print the list\n");
        printf("3. Search element index\n");
        printf("4. Delete an element\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("Enter the number of nodes of your list: ");
                scanf(" %d", &num);
                printf("\nEnter the element number 1: ");
                scanf(" %d", &data);
                head = createNode(data);
                for (int i = 1; i < num; i++){
                    printf("\nEnter the element number %d: ", i+1);
                    scanf(" %d", &data);
                    head = addEnd(head, data);
                }
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("For which element do you want to know the index position? ");
                scanf(" %d", &element);
                search(head, element);
                break;
            case 4:
                printf("Which element do you want to delete? ");
                scanf(" %d", &element);
                head = delEl(head, element);
                displayList(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid input");
        }
    }
}


struct node *createNode(int data){
    struct node *node = malloc(sizeof(struct node));
    node->data = data;
    node->link = NULL;
    return node;
}

struct node *addBeg(struct node* head, int data){
    struct node *newNode = createNode(data);
    newNode->link = head;
    head = newNode;
    return head;
}

void displayList(struct node *head){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    printf("The elements of the list are:\n");
    while (ptr != NULL)
    {
        printf(" %d", ptr->data);
        ptr = ptr->link;
    }
}

struct node *addEnd(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    struct node * ptr= malloc(sizeof(struct node));
    ptr = head;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    return head;
}

void search(struct node *head, int element){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    int count = 0;
    while(ptr != NULL){
        if (ptr->data == element){
            printf("The element is at index: %d", count);
            break;
        }else{
            ptr = ptr->link;
            count++;
        }
    }
}


struct node *delEl(struct node *head, int element){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;

    if (ptr->data == element){
        head = ptr->link;
        free(ptr);
        ptr = NULL;
        return head;
    }else{
        struct node *temp = malloc(sizeof(struct node));

        while (ptr->link->data != element){
            ptr = ptr->link;
        }
        temp = ptr->link;
        ptr->link = temp->link;
        free(temp);
        temp = NULL;
        return head;
    }
}
