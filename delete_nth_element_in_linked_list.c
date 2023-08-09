#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    double gpa;
    struct student *next;
};
struct student *head;
struct student *temp;

void student( int n){
    for(int i=0; i<n; i++){
        scanf("%d %lf", &head->id, &head->gpa);
        head->next = malloc(sizeof(struct student));
        head = head->next;
        head->next = NULL;
    }
}
void delete(int n){

    struct student *temp = head;
    for(int i = 0; i < n - 1; ++i){
        temp = temp -> next;
    }
    struct student *tem2 = temp;
    tem2 = tem2->next;
    if(n == 0){
        head = head -> next;
        return;
    }
    tem2 = tem2->next;
    temp -> next = tem2;



}
int main(){
    head = malloc(sizeof(struct student));
    temp = head;
    int  n;
    scanf("%d", &n);
    student(n);
    head = temp;
    while(head->next != NULL){
        printf("%d %.2lf\n", head->id, head->gpa);
        head = head->next;
    }
    head = temp;
    int x;
    scanf("%d", &x);
    delete(x -1 );;
    printf("after \n");
    while(head->next != NULL){
        printf("%d %.2lf\n", head->id, head->gpa);
        head = head->next;
    }
    head = temp;
    return 0;

}
