#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
}node;
node *create(int key){
    node *head, *temp, *nn;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    printf("enter the data in node\n");
    scanf("%d", &(head->data));
    temp=head;
    for(int i=1; i<key; i++){
        nn=(node *)malloc(sizeof(node));
        scanf("%d", &(nn->data));
        nn->next=NULL;
        temp->next=nn;
        temp=nn;
    }
    return head;
}
void display (node *head){
    node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
int main(){
    node *head;
    head=create( 5);
    display(head);
}