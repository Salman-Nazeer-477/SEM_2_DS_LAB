#include <stdio.h>
int main(){
    int stack[10], top = -1, num, choice;
    do{
        printf("\n");
        printf("1. Push\n2. Pop\n3. Display\n0. Exit\n");
        scanf("%d", &choice);
        if(choice == 1){
            if (top + 1 == 10) printf("Stack Overflow!\n");
            else{
                printf("Enter number to be pushed:");
                scanf("%d", &num);
                stack[++top] = num;
            }
        }
        else if(choice == 2)
            if (top == -1) printf("Stack Underflow!\n");
            else printf("Popped: %d", stack[top--]);
        else if(choice == 3){
            printf("Stack:\n");
            for (int i = top; i > -1; i--) printf("%d ", stack[i]);
            printf("\n");
        }
    } while (choice != 0);
    return 0;
}