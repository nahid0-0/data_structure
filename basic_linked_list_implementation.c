#include<stdio.h>
#include<stdlib.h>

struct stdudent{
    int data;
    int gpa;
    struct stdudent *node;
};
int main(){
    struct  stdudent *head = malloc (sizeof(struct stdudent));
    struct  stdudent *can =head;

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; ++i){
        int x;
        int  y;
        scanf("%d", &x);
        scanf("%d", &y);
        head -> data = x;
        head -> gpa = y;
        head -> node = malloc(sizeof(struct stdudent));
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
