#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *last = NULL;
void insertAtFront(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    if (last == NULL)
    {
        temp->next = temp;
        last = temp;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
    }
}
void insertAtEnd(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    if (last == NULL)
    {
        temp->next = temp;
        last = temp;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
void deleteFirst()
{
    if (last == NULL)
        return;
    struct node *temp = last->next;
    if (last->next == last)
        last = NULL;
    else
        last->next = temp->next;
    free(temp);
}
void viewList()
{
    if (last == NULL)
        return;
    struct node *temp = last->next;
    do
    {
        printf("%d ", temp->info);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n");
        printf("1. Insert at start\n2. Insert at end\n3. Delete at start\n4. Display\n0. Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {   
            int num;
            printf("Enter number:");
            scanf("%d", &num);
            insertAtFront(num);
        }
        else if (choice == 2)
        {
            int num;
            printf("Enter number:");
            scanf("%d", &num);
            insertAtEnd(num);
        }
        else if (choice == 3)
        {
            deleteFirst();
        }
        else if (choice == 4)
        {
            viewList();
        }
    } while (choice != 0);
    return 0;
}
