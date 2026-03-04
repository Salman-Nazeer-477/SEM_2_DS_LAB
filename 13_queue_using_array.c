#include<stdio.h>
#define SIZE 10
int queue[SIZE];
int front = -1;
int rear = -1;
void enqueue(int);
int dequeue();
int main(){
    enqueue(3);
    enqueue(4);
    display(front, rear);
    dequeue(front, rear);
    display(front, rear);
    return 0;
    
}
void enqueue(int num){
    if(rear == SIZE - 1){
        printf("Queue full!");
        return;
    }
    if(front == -1) front = 0;
    rear++;
    queue[rear] = num;
}

int dequeue(){
    if(front == rear){
        printf("Queue is empty!");
        return 1;
    }
    printf("Removed %d\n", queue[front]);
    front++;
}

void display(int front, int rear){
    if(front == rear){
        printf("Queue is empty");
        return;
    }
    for(int i = front; i < rear; i++) printf("%d", queue[i]);
    printf("\n");
}
