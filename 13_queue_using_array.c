#include<stdio.h>
#define SIZE 10
int queue[SIZE], front = -1, rear = -1;
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
        else if(choice == 2) dequeue();
        else if(choice == 3)display();
    } while (choice != 0);
}
void enqueue(int num){
    if(rear == SIZE - 1){
        printf("Queue full!");
        return;
    }
    if(front == -1) front = rear = 0;
    queue[rear++] = num;
}
int dequeue(){
    if(front == -1){
        printf("Queue is empty!");
        return 1;
    }
    printf("Removed %d\n", queue[front]);
    front++;
    if(front == rear) front = rear = -1;
}
void display(){
    if(front > rear || front == -1){
        printf("Queue is empty");
        return;
    }
    printf("Queue: ");
    for(int i = front; i < rear; i++) printf("%d ", queue[i]);
    printf("\n");
}
