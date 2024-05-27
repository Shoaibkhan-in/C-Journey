#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal(struct node *ptr){
    while(ptr!=NULL){
    printf("Element is : %d\n", ptr->data);
    ptr=ptr->next;
    }
}
struct node *insertAtFirst(struct node *head, int data){
    struct node *ptr;
    ptr=(struct node *)malloc (sizeof (struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
int main (){
struct node *head, *second, *third;
head=(struct node*)malloc (sizeof(struct node));
second=(struct node*)malloc (sizeof(struct node));
third=(struct node*)malloc (sizeof(struct node));

head->data=6;
head->next=second;

second->data=8;
second->next=third;

third->data=10;
third->next=NULL;

traversal(head);
head=insertAtFirst(head,45);
traversal(head);
}