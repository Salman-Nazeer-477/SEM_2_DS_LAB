#include <stdio.h>
#define SIZE 10
int main()
{
    int stack[size];
    int top = -1;
    int num;
    int choice;
    do
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (top + 1 == SIZE)
            {
                printf("Stack Overflow!\n");
            }
            else
            {
                printf("Enter number to be pushed:");
                scanf("%d", &num);
                top++;
                stack[top] = num;
            }
            break;
        case 2:
            if (top == -1)
            {
                printf("Stack Underflow!\n");
            }
            else
            {
                printf("%d", stack[top]);
                top--;
            }
            break;
        case 3:
            printf("Stack:\n");
            for (int i = top; i > -1; i--)
            {
                printf("%d ", stack[i]);
            }
            printf("\n");
            break;
        }

    } while (choice != 0);
}