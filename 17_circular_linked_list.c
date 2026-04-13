#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *last = NULL;
void insert(int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    if (last == NULL) {
        last = newNode;
        last->next = last;
    } else {
        newNode->next = last->next;
        last->next = newNode;
        last = newNode;
    }
}
void display() {
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = last->next;
    printf("List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("(back to start)\n");
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    return 0;
}