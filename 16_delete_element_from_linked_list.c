#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtFirst(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void deleteFromFirst(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    *head = temp->next;
    free(temp);
}
void deleteFromEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    if (temp->next == NULL)
    {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}
void deleteAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    if (position == 0)
    {
        deleteFromFirst(head);
        return;
    }
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
    {
        printf("Position out of range\n");
        return;
    }
    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}
void print(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head = NULL;
    insertAtFirst(&head, 1);
    insertAtFirst(&head, 2);
    insertAtFirst(&head, 3);
    insertAtFirst(&head, 4);
    insertAtFirst(&head, 5);
    int choice;
    do
    {
        printf("\n");
        printf("1. Delete at start\n2. Delete at index\n3. Delete at end\n4. Display\n0. Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            deleteFromFirst(&head);
        }
        else if (choice == 2)
        {
            int position;
            printf("Enter position:");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
        }
        else if (choice == 3)
        {
            deleteFromEnd(&head);
        }
        else if (choice == 4)
        {
            print(head);
        }
    } while (choice != 0);
    return 0;
}