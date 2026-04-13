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

void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(struct Node **head, int data, int position)
{
    struct Node *newNode = createNode(data);
    if (position == 0)
    {
        insertAtFirst(head, data);
        return;
    }
    struct Node *temp = *head;
    for (int i = 0; temp != NULL && i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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

int input(){
    int num;
    printf("Enter number to be inserted:");
    scanf("%d", &num);
    return num;
}

int main()
{
    struct Node *head = NULL;
    int num, choice;
    do
    {
        printf("\n");
        printf("1. Insert at start\n2. Insert at index\n3. Insert at end\n4. Display\n0. Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            num = input();
            insertAtFirst(&head, num);
        }
        else if (choice == 2)
        {
            int position;
            num = input();
            printf("Enter position:");
            scanf("%d", &position);
            insertAtPosition(&head, num, position);
        }
        else if (choice == 3)
        {
            num = input();
            insertAtEnd(&head, num);
        }
        else if (choice == 4)
        {
            print(head);
        }
    } while (choice != 0);

    return 0;
}