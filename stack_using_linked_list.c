#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack *node;
};
struct stack *list;
struct stack *head;
int top = 0;


void push(int data){
    head = malloc(sizeof(struct stack));
    head -> data = data;
    head -> node = list;
    list = head;
    top++;
}
int pop(){
    if(!top){
        printf("list is empty \n");
        return  -1;
    }
    int temp = list -> data;
    list = list->node;
    top--;
    return  temp;
}


int main(){
    list = malloc(sizeof(struct stack));
    list->node = NULL;
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        push(i);
    }
    while(list ->node != NULL) printf("%d \n", pop());

    return 0;
}
