#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next, *prev;
}node;
node *create (int key){
    node *head, *nn, *temp;
    head=NULL;
    printf("enter the data in node\n");
    for(int i=0; i<key; i++){
        nn=(node *)malloc(sizeof(node));
        nn->next=nn->prev=NULL;
        scanf("%d", &(nn->data));
        if(head==NULL){
            head=nn;
            temp=head;
        }
        else{
            temp->next=nn;
            nn->prev=temp;
            temp=nn;
        }
    }
    return (head);
}
void forwardprint(node *head){
    node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
void backwardprint(node *head){
    node *temp;
    temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    while(temp->prev!=NULL){
        printf("%d", temp->data);
        temp=temp->prev;
    }
    printf("%d", temp->data);
}
int main (){
node *head;
int key=5;
head=create(key);
head=bubblesort(head,5);
forwardprint(head);

printf("\n");
backwardprint(head);
}