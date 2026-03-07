#include <stdio.h>
#define SIZE 10
int main(){
    int stack[SIZE], top = -1, num, choice;
    do{
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            if (top + 1 == SIZE) printf("Stack Overflow!\n");
            else{
                printf("Enter number to be pushed:");
                scanf("%d", &num);
                stack[++top] = num;
            }
            break;
        case 2:
            if (top == -1) printf("Stack Underflow!\n");
            else printf("Popped: %d", stack[top--]);
            break;
        case 3:
            printf("Stack:\n");
            for (int i = top; i > -1; i--) printf("%d ", stack[i]);
            printf("\n");
            break;
        }
    } while (choice != 0);
}