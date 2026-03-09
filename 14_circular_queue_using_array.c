#include<stdio.h>
#define SIZE 5
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
    if(((rear + 1) % SIZE) == front){
        printf("Queue full!");
        return;
    }
    if(front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = num;
}

int dequeue(){
    if(front == -1){
        printf("Queue is empty!");
        return 1;
    }
    printf("Removed %d\n", queue[front]);
    if(front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
    
}

void display(){
    if(front == rear){
        printf("Queue is empty");
        return;
    }
    for(int i = front; i != rear; i = (i + 1) % SIZE) printf("%d ", queue[i]);
    printf("%d\n", queue[rear]);
}
