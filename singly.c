#include<stdio.h>
#include<stdlib.h>

struct node{
    int a;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void insert_at_end(int data){
    struct node *t = malloc(sizeof(struct node));
    t -> a = data;
    t -> next = NULL;
    if(head == NULL){
        tail = t;
        head = t;
    }
    else{
        tail ->next = t;
        tail = tail->next;
    }
}
void insert_at_middle(int n, int data){
    if(head == NULL || tail == NULL || n == 1 ){
        printf("insertion at middle is not possible");
        return;
    }
    struct  node* t = head;
    struct node* t2 = malloc(sizeof(struct node));
    t2->a = data;
    for(int i = 1; i < n - 1; ++i){
        t = t->next;
        if(t == NULL){
            printf("insertion at middle is not possible");
            return;
        }
    }
    t2->next = t->next;
    t->next = t2;

}
void insert_at_beggening(int data){
   struct node* t = malloc(sizeof(struct node));
   t->a = data;
   t->next = head;
   head = t;
   if(tail == NULL) tail = t;

}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        int t;
        scanf("%d", &t);
        insert_at_end(t);
    }

    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        int t;
        scanf("%d", &t);
        insert_at_beggening(t);
    }
    scanf("%d", &n);
    insert_at_middle(n,887788);
    struct node *t = head;
    while(t != NULL){
        printf("%d ", t->a);
        t = t->next;
    }

}

