#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    int gpa;
    struct Node *node;
};
int main(){
    struct  Node *head = malloc (sizeof(struct Node));
    struct  Node *can =head;

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; ++i){
        int x;
        int  y;
        scanf("%d", &x);
        scanf("%d", &y);
        head -> data = x;
        head -> gpa = y;
        head -> node = malloc(sizeof(struct Node));
        head = head -> node;
        head -> node = NULL;


    }



    while(can->node != NULL){
        printf("%d \n",can->data);
        printf("%d \n", can->gpa);
        can = can->node;
    }

    return 0;
}
