#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
int s[MAX], top = -1;
void push(int v) {
    if (top == MAX - 1) exit(1);
    s[++top] = v;
}
int pop() {
    if (top == -1) exit(1);
    return s[top--];
}
int eval(char *e) {
    int i = 0, a, b;
    while (e[i]) {
        if (e[i] == ' ' || e[i] == '\n') { i++; continue; }

        if (isdigit(e[i])) {
            int n = 0;
            while (isdigit(e[i]))
                n = n * 10 + (e[i++] - '0');
            push(n);
        } else {
            b = pop(); a = pop();
            if (e[i] == '+') push(a + b);
            else if (e[i] == '-') push(a - b);
            else if (e[i] == '*') push(a * b);
            else if (e[i] == '/') push(a / b);
            else exit(1);
            i++;
        }
    }
    return pop();
}
int main() {
    char e[MAX];
    fgets(e, MAX, stdin);
    printf("Result = %d\n", eval(e));
    return 0;
}