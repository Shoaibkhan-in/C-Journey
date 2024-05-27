#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
}node;
node *create(int n){
    node *temp, *nn, *head;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
        temp=head;
        printf("enter the data");
        for (int i=0; i<n; i++){
            nn=(node *)malloc(sizeof(node));
            nn->next=NULL;
            scanf("%d", &(nn->data));
            temp=nn->next;
            temp=nn;
        }
    return (head);
}
void display(node *head){
    node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp=temp->next;
    }
}
int main (){
node *head;
create (5);
display(head);
}