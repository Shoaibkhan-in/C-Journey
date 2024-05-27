#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
        nn=(node *)malloc (sizeof(node));
        nn->next=NULL;
        scanf("%d", &(nn->data));
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
node *insert (node *head , int n, int pos){
    node *temp, *nn;
    int i;
    nn=(node *)malloc(sizeof(node));
    nn->data=n; 
    nn->next=NULL;
    if(pos==1){
        nn->next=head;
        return nn;
    }
    else if (pos>0){
        temp=head;
        for(i=1; i<pos-1; i++)
            temp=temp->next;
            nn->next=temp->next;
            temp->next=nn;
        
    }
    return head;
}
int search(node *head, int key){
    node *temp;
    int i;
    for (temp=head, i=0; temp!=NULL; temp=temp->next, i++){
        if(key==temp->data)
            return i+1;
        }
    return -1;
}
node *delete(node *head, int key){
    node *temp, *temp1;
    temp1=temp=head;
    if(key==head->data){
        temp=head;
        head=head->next;
        free(temp);
    }
    else{
        while (key!=(temp->next)->data && temp->next!=NULL)
            temp=temp->next;
            if(temp->next!=NULL){
                temp1=temp->next;
                temp->next=(temp->next)->next;
                free (temp1);
            }
        
    }
    return head;
}
int main (){
node *head;
head=create(5);
display(head);
head=insert(head, 5, 2);
display(head);
head=delete(head, 1);
display(head);
int a;
a=search(head, 5);
if(a>0)
    printf("element is found at location %d\n", a);

else
    printf("element is not found\n");

}