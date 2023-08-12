#include<stdio.h>
#include<stdlib.h>
const int N = 10000000;
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x){
    if(rear < N) {
        queue[++rear] = x;
        if(front == -1) front++;
    }

    else
        printf("queue is full \n");
}

int dequeue(){
    if(front > -1 && front != N && front <= rear)
        return queue[front++];
    else {
        printf("queue is empty \n");
        rear = -1, front = -1;
        return -1;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        int x;
        scanf("%d", &x);
        enqueue(x);
    }
    while (n--){
        printf("%d \n", dequeue());
    }
    printf("%", dequeue());
    return 0;
}
