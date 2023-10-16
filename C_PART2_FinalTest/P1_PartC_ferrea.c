#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node{
    int employeeNum;
    char name[30];
    int grade;
    struct node *link;
};

struct node *createNode(int employeeNum, char *name, int grade);
void displayList(struct node *head);
void search(struct node *head, int employeeNum);
struct node *delEl(struct node *head, int employeeNum);
struct node *addEnd(struct node *head, int employeeNum, char *name, int grade);
bool isEmpty(struct node *head);
struct node* sortGrade(struct node *head);
struct node* merge(struct node *head1, struct node *head2);

int main(){
    struct node *head;
    int choice, num, employeeNum, grade;
    char name[30];

    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    head2->employeeNum = 544;
    strcpy(head2->name, "John");
    head2->grade = 4;
    head2->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->employeeNum = 198;
    strcpy(current->name, "Mike");
    current->grade = 2;
    current->link = NULL;

    head2->link = current; 

    struct node *current2 = (struct node *)malloc(sizeof(struct node));
    current2->employeeNum = 190;
    strcpy(current2->name, "Brian");
    current2->grade = 5;
    current2->link = NULL;

    head2->link->link = current2;


    while(1){
        printf("\n\n");
        printf("1. Create the list of employees\n");
        printf("2. Print the list of employees\n");
        printf("3. Search an employee\n");
        printf("4. Delete an employee\n");
        printf("5. Add employees to the system\n");
        printf("6. Display employees sorted by grade\n");
        printf("7. Merge two list\n");
        printf("8. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
                printf("Enter the number of employee to add: ");
                scanf(" %d", &num);
                printf("\nEnter the Employee NUMBER for the employee 1: ");
                scanf(" %d", &employeeNum);
                printf("\nEnter the Employee NAME for the employee 1: ");
                scanf(" %s", &name);
                printf("\nEnter the Employee GRADE (1 to 5) for the employee 1: ");
                scanf(" %d", &grade);
                head = createNode(employeeNum, name, grade);
                for (int i = 1; i < num; i++){
                    printf("\nEnter the Employee NUMBER for the employee %d: ",i+1);
                    scanf(" %d", &employeeNum);
                    printf("\nEnter the Employee NAME for the employee  %d: ",i+1);
                    scanf(" %s", &name);
                    printf("\nEnter the Employee GRADE (1 to 5) for the employee  %d: ",i+1);
                    scanf(" %d", &grade);
                    head = addEnd(head, employeeNum, name, grade);
                }
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter the employee number to see the employee's data: ");
                scanf(" %d", &employeeNum);
                search(head, employeeNum);
                break;
            case 4:
                printf("Enter the employee number to delete: ");
                scanf(" %d", &employeeNum);
                head = delEl(head, employeeNum);
                printf("\n");
                displayList(head);
                break;
            case 5:
                printf("Enter the number of employee to add: ");
                scanf(" %d", &num);
                for (int i = 0; i < num; i++){
                    printf("\nEnter the Employee NUMBER for the employee %d: ",i+1);
                    scanf(" %d", &employeeNum);
                    printf("\nEnter the Employee NAME for the employee  %d: ",i+1);
                    scanf(" %s", &name);
                    printf("\nEnter the Employee GRADE (1 to 5) for the employee  %d: ",i+1);
                    scanf(" %d", &grade);
                    head = addEnd(head, employeeNum, name, grade);
                }  
                break;
            case 6:
                head = sortGrade(head);
                break;
            case 7:
                head = merge(head, head);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid input");
        }
    }
}



struct node *createNode(int employeeNum, char *name, int grade){
    struct node *node = malloc(sizeof(struct node));
    node->employeeNum = employeeNum;
    strcpy(node->name, name);
    node->grade = grade;
    node->link = NULL;
    return node;
}

struct node *addEnd(struct node *head, int employeeNum, char *name, int grade){
    struct node *temp = malloc(sizeof(struct node));
    temp->employeeNum = employeeNum;
    strcpy(temp->name, name);
    temp->grade = grade;
    temp->link = NULL;

    struct node * ptr= malloc(sizeof(struct node));
    ptr = head;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    return head;
}

void displayList(struct node *head){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    printf("The employee's list is:\n");
    while (ptr != NULL)
    {
        printf("Employee Number: %d -", ptr->employeeNum);
        printf("Employee name: %s -", ptr->name);
        printf("Employee grade: %d\n", ptr->grade);
        ptr = ptr->link;
    }
}

void search(struct node *head, int employeeNum){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    int count = 0;
    while(ptr != NULL){
        if (ptr->employeeNum == employeeNum){
            printf("The employee associated to the number %d is:\n", employeeNum);
            printf("Name: %s - ", ptr->name);
            printf("Grade: %d\n", ptr->grade);
            break;
        }else{
            ptr = ptr->link;
            count++;
        }
    }
}

struct node *delEl(struct node *head, int employeeNum){
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;

    if (ptr->employeeNum == employeeNum){
        head = ptr->link;
        free(ptr);
        ptr = NULL;
        return head;
    }else{
        struct node *temp = malloc(sizeof(struct node));

        while (ptr->link->employeeNum != employeeNum){
            ptr = ptr->link;
        }
        temp = ptr->link;
        ptr->link = temp->link;
        free(temp);
        temp = NULL;
        return head;
    }
}

bool isEmpty(struct node *head){
        if (head == NULL){
        return true;
    }else{
        return false;
    }
}

struct node* sortGrade(struct node *head){
    int i,j,a;

    struct node *temp1;
    struct node *temp2;

    for(temp1=head;temp1!=NULL;temp1=temp1->link)
        {
        for(temp2=temp1->link;temp2!=NULL;temp2=temp2->link)
            { 
            if(temp2->grade > temp1->grade)
                {
                a = temp1->grade;
                temp1->grade = temp2->grade;
                temp2->grade = a;
                }
            }
        }
        return head;
        displayList(head);
}

struct node* merge(struct node* head1, struct node* head2)
{
    printf("\n");
    struct node* ptr1 = head1;
    struct node* ptr2 = head2;
    struct node* head3 = NULL;
    ptr1 = sortGrade(ptr1);
    ptr2 = sortGrade(ptr2);
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->grade == ptr2->grade)
        {
            if (isEmpty(head3)){
                head3 =createNode(ptr1->employeeNum, ptr1->name, ptr1->grade);
                ptr1 = ptr1->link;
                ptr2 = ptr2->link;
            }else{
                head3 =addEnd(head3, ptr1->employeeNum, ptr1->name, ptr1->grade);
                ptr1 = ptr1->link;
                ptr2 = ptr2->link;
            }
        }
        else if(ptr1->grade > ptr2->grade)
        {
            if (isEmpty(head3)){
                head3 = createNode(ptr1->employeeNum, ptr1->name, ptr1->grade);
                 ptr1 = ptr1->link;
            }else{
                head3 = addEnd(head3, ptr1->employeeNum, ptr1->name, ptr1->grade);
                ptr1 = ptr1->link;
            }
        }
        else if(ptr1->grade < ptr2->grade)
        {
            if (isEmpty(head3)){
                head3 = createNode(ptr2->employeeNum, ptr2->name, ptr2->grade);
                ptr2 = ptr2->link;               
            }else{
                head3 = addEnd(head3, ptr2->employeeNum, ptr2->name, ptr2->grade);
                ptr2 = ptr2->link;
            }
        }
    }
    while(ptr1 != NULL)
    {
        head3 = addEnd(head3, ptr1->employeeNum, ptr1->name, ptr1->grade);
        ptr1 = ptr1->link;            
    }
    while(ptr2 != NULL)
    {
        head3 = addEnd(head3, ptr2->employeeNum, ptr2->name, ptr2->grade);
        ptr2 = ptr2->link;            
    }
    printf("The first polynomial is: ");
    displayList(head1);
    printf("\n");
    printf("The second polynomial is: ");
    displayList(head2);
    printf("\n");
    printf("Added polynomial is: ");
    displayList(head3);
    printf("\n\n\n");
    return head3;
}
