#include<stdlib.h>
#include<stdio.h>

int a[10];
int top = -1;

void push(int data){
    if(top == 9){
        printf("fuck off, no space for you \n");
        return;
    }
    a[++top] = data;
}
int pop(){
    if(top == -1){
        printf("fuck off, it's empty \n");
        return -1;
    }
    return a[top--];
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) push(i);
    while(n--){
        printf("%d \n", pop());
    }
    return 0;
}
