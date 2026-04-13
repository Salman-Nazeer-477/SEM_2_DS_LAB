#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *createNode(int data){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insert(struct Node **head, int data){
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void print(struct Node *head){
    struct Node *temp = head;
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
    struct Node *head = NULL;
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