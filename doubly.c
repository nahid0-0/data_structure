#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void insert_at_end(int data){
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        tail = head;
    }
    else{
        struct node *t = malloc(sizeof(struct node));
        t->data = data;
        t-> prev = tail;
        t->next = NULL;
        tail ->next = t;
        tail = t;
    }
}

void insert_at_beginning(int data){
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head -> data = data;
        head -> prev = NULL;
        head -> next = NULL;
        tail = head;
    }
    else{
        struct node *t = malloc(sizeof(struct node));
        t -> data = data;
        t -> prev = NULL;
        t ->next = head;
        head = t;
    }
}

void insert_at_middle(int n, int data){
    if(n == 1 ){
        printf("use insert at bigg");
        return;
    }
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head -> data = data;
        head -> prev = NULL;
        head -> next = NULL;
        tail = head;
    }
    else{
        struct node *t = head;
        for(int i = 1; i < n - 1; ++i){
            if(t == NULL) return;
            t = t->next;
        }
        struct node *t2 = malloc(sizeof(struct node));
        t2 -> data = data;
        t2 -> prev = t;
        t2 -> next = t->next;
        t -> next = t2;

    }
}
void delete_from_big(){
    if(head != NULL){
        struct node *t = head;
        head = head -> next;
        head -> prev = NULL;
        free(t);
    }
}
void delete_from_end(){
    if(tail != NULL){
        struct node *t = tail;
        tail = tail->prev;
        tail -> next = NULL;
        free(t);
    }
}

void delete_from_mid(int n){
    if(tail != NULL){
        struct node *t = head;
        struct node *t2 = NULL;
        for(int i = 1; i < n; ++i){
            if(t == NULL){
                printf("fuck off! \n");
                return;
            }
            t2 = t;
            t = t->next;
        }
        t2->next = t->next;
        t = t->next;
        t -> prev = t2;

    }
}


int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        insert_at_end(t);
    }
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        insert_at_beginning(t);
    }
    scanf("%d", &n);
    insert_at_middle(n, 898989);
    struct node* t;
    t = head;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
//    delete_from_big();
//    delete_from_end();
    scanf("%d", &n);
    delete_from_mid(n);
    t = head;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }





}
