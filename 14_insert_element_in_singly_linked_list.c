#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} node;
node *createNode(int data){
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insert(node **head, int data){
    node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void print(node *head){
    node *temp = head;
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int input(){
    int num;
    printf("Enter number to be inserted:");
    scanf("%d", &num);
    return num;
}
int main(){
    node *head = NULL;
    int num, choice;
    do{
        printf("\n");
        printf("1. Insert\n2. Display\n0. Exit\n");
        scanf("%d", &choice);
        if (choice == 1){
            num = input();
            insert(&head, num);
        }
        else if (choice == 2) print(head);
    } while (choice != 0);
    return 0;
}