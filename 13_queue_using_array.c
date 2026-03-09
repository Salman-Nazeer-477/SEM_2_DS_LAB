#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;
void display();
void enqueue(int);
int dequeue();
int main(){
    int choice, num;
    do{
        printf("\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n0. Exit\n");
        scanf("%d", &choice);
        if(choice == 1){
            printf("Enter number:");
            scanf("%d", &num);
            enqueue(num);
        }
        else if(choice == 2)
            dequeue();
        else if(choice == 3){
            printf("Queue:");
            display();
        }
    } while (choice != 0);
    
}
void enqueue(int num){
    if(rear == SIZE - 1){
        printf("Queue full!");
        return;
    }
    if(front == -1) front = 0;
    rear = rear + 1;
    queue[rear] = num;
}

int dequeue(){
    if(front > rear || front == -1){
        printf("Queue is empty!");
        return 1;
    }
    printf("Removed %d\n", queue[front]);
    front++;
}

void display(){
    if(front > rear || front == -1){
        printf("Queue is empty");
        return;
    }
    for(int i = front; i <= rear; i++) printf("%d ", queue[i]);
    printf("\n");
}
