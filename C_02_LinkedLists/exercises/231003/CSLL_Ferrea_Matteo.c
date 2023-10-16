#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *creatingFirstNode(int data);
struct node *addEnd(struct node *tail, int data);
struct node *createCSLL(struct node *tail);
void displayList(struct node *tail);
void search(struct node *tail, int element);
struct node *delEl(struct node *tail, int pos);

int main(){
    struct node *tail;
    int choice, num, data, element, pos;

    while(1){
        printf("\n\n");
        printf("1. Create a CSSL\n");
        printf("2. Print the list\n");
        printf("3. Search element index\n");
        printf("4. Delete an element\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                tail = createCSLL(tail);
                break;
            case 2:
                displayList(tail);
                break;
            case 3:
                printf("For which element do you want to know the index position? ");
                scanf(" %d", &element);
                search(tail, element);
                break;
            case 4:
                printf("Which element do you want to delete (enter position)? ");
                scanf(" %d", &pos);
                tail = delEl(tail, pos);
                displayList(tail);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid input");
        }
    }
}



struct node *creatingFirstNode(int data){ //it is equivalent to add a node to an empty list
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}

struct node *addEnd(struct node *tail, int data){
    struct node *newP = malloc(sizeof(struct node));
    newP-> data = data;
    newP->next = NULL;

    newP->next = tail->next;
    tail->next = newP;
    tail = newP;

    return tail;
}

struct node *createCSLL(struct node *tail){
    int num, data;
    printf("How many nodes to put in the list? ");
    scanf(" %i", &num);

    printf("\nEnter the data for the node 0: ");// Need to create the first node before to attach the other
    scanf(" %d", &data);
    tail = creatingFirstNode(data);

    for (int i = 1; i < num; i++){
        printf("\nEnter the data for the node %d: ",i);
        scanf(" %d", &data);
        tail = addEnd(tail, data);
    }
    return tail;
}

void displayList(struct node *tail){
    struct node *ptr = tail->next;
    printf("\n");
    do{
        printf(" %d", ptr->data);
        ptr = ptr->next;
    } while (ptr != tail->next);
}

void search(struct node *tail, int element){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = tail;
    int count = -1;
    do{
        count += 1;
        if (ptr->data == element){
            printf("The element is at index: %d", count);
            break;
        }else{
            ptr = ptr->next;
        }
    } while (ptr != tail);
}

struct node *delEl(struct node *tail, int pos){
    struct node* temp = tail->next;
    if(tail->next == tail)
    {
        free(tail);
        tail = NULL;
        return tail;
    }
    while (pos > 2)
    {
        temp = temp->next;
        pos--;
    }
    struct node* temp2 = temp->next;
    temp->next = temp2->next;

    if(temp2 == tail)
        tail = temp;
    free(temp2);
    temp2 = NULL;
    return tail;
}