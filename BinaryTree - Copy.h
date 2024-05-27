#include <stdlib.h>

typedef struct node{
    int data;
    struct node *right, *left;
}node;

node *init(node *root){
    return (root=NULL);
}
node *insert(node *root, int x){
    if(root==NULL){
        root=(node *)malloc(sizeof(node));
        root->data=x;
        root->right=NULL;
        root->left=NULL;
        return (root);
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
    return(root);
}
node *create(node *root){
    int n,x,i;
    printf("Enter Number of nodes:-\n");
    scanf("%d", &n);
    printf("Enter the Tree values:-\n");
    for(i=0; i<n; i++){
        scanf("%d", &x);
        root=insert(root, x);
    }
    return root;
}
void display(node *root){
    if (root!=NULL){
        display(root->right);
        printf("%d", root->data);
        display(root->left);
    }
}