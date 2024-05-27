#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct node *right,*left;
    int data;
}node;
node *init(node *root){
    return (root=NULL);
}
node *insert(node *root, int x){
    if(root==NULL){
        node *root1;
        root1=(node *)malloc(sizeof(node));
        root1->data=x;
        root1->right=NULL;
        root1->left=NULL;
        return(root1);
    }
    if(root->data>=x){
        root->right=insert(root->right,x);
        return (root);
    }
    else
    if(root->data<=x){
        root->left=insert(root->left,x);
        return (root);
    }
    else
    return (root);
}
node *create(node *root){
    
}

int main(){

}