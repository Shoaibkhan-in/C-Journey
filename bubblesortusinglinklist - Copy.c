#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
}node;
node *create (int n){
    node *head, *nn, *temp;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    printf("enter the data in node\n");
    scanf("%d", &(head->data));
    temp=head;
    for (int i=1; i<n; i++){
        nn=(node *)malloc(sizeof(node));
        nn->next=NULL;
        scanf("%d", &(nn->data));
        temp->next=nn;
        temp=nn;
    }
    return head;
}
void display(node *head){
    node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d", temp->data);
        temp=temp->next;
    }
}
void bubblesort(node *head){
    node *temp, *temp1;
    int i;
    for (temp=head; temp!=NULL; temp=temp->next){
        for (temp1=temp->next; temp1!=NULL; temp1=temp1->next){
            i=temp->data;
            temp->data=temp1->data;
            temp1->data=i;
        }
    }
}
int main (){
node *head;
int n=5;
head=create(5);
bubblesort(head);
display(head);
}