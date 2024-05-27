#include <stdlib.h>

typedef struct node{
    int data;
    struct node *right, *left;
}node;

node *init(node *root){
    return (root=NULL);
}
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
void preorder(node *root){
    if(root!=NULL){
        printf("%d", root->data);
        preorder(root->left);
        preorder (root->right);
    }
}
void postorder(node *root){
    if(root!=NULL){
        postorder (root->left);
        postorder (root->right);
        printf("%d", root->data);
    }
}
node *search(node *root, int x){
    while(root!=NULL){
        if(x==root->data)
        return root;
        if(x>root->data)
        root=root->right;
        else
        root=root->left;
    }
    return (NULL);
}
node *insert(node *root, int x){
    node *root1;
    if(root==NULL){
        root1=(node *)malloc(sizeof(node));
        root1->data=x;
        root1->left=NULL;
        root1->right=NULL;
        return (root1);
    }
    if(x>root->data){
        root->right=insert(root->right, x);
        return (root);
    }
    else
    if(x<root->data){
        root->left=insert(root->left, x);
        return (root);
    }
    else 
    return (root);
}