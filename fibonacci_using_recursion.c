#include<stdio.h>
int fibonacci(int);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("%d term of fibonacci series is %d\n", num, fibonacci(num));
    return 0;
}

int fibonacci(int num){
    if(num == 1 || num == 2) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
