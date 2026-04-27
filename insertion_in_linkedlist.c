#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} node;

node *creatNode(int data){
    node *newNode = (node*)malloc(sizeof(node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

void insert(node **head, int data){
    node *newNode = creatNode(data);
    newNode -> next = *head;
    *head = newNode;
}

void print(node *head){
    node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}
int main(){
    node *head = NULL;
    insert(&head, 10);
    print(head);
    return 0;
}