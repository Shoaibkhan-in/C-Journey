#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
}node;

node *init(node *root){
    return (root=NULL);
}
node *insert(node *root, int x){
    node *temp;
    if(root==NULL){
        temp=(node *)malloc(sizeof(node));
        temp->data=x;
        temp->right=NULL;
        temp->left=NULL;
        return (temp);
    }
    if(x>root->data){
        root->right=insert(root->right,x);
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
node *create(node *root){
    int x, n;
    printf("Enter How Many Nodes You want:-\n");
    scanf("%d", &n);
    printf("Enter the Data In nodes:-\n");
    for (int i=0; i<n; i++){
        scanf("%d", &x);
        root=insert(root,x);
    }
return (root);
}
void display(node *root){
    node *temp;
    temp=root;
    if(temp!=NULL){
        display(temp->left);
        printf("%d", temp->data);
        display(temp->right);
    }
}
int countnodes(node *root){
    static int totalnodes=0;
    if(root!=NULL){
        totalnodes++;
        countnodes(root->right);
        countnodes(root->left);
        return (totalnodes);
    }
    else
    return 0;
}
int countleaf(node *root){
    if(root==NULL){
        return 0;
    }
    else
    if(root->right==NULL && root->left==NULL){
        return 1;
    }
    else
    return countleaf(root->right)+countleaf(root->left);
}
node *copy(node *root){
    node *root1;
    if(root==NULL){
        return NULL;
    }
    root1=insert(root, root->data);
    root1->right=copy(root->right);
    root1->left=copy(root->left);
    return (root1);
}
int compare(node *root, node *root1){
    if(root==NULL && root1==NULL){
        return 1;
    }
    if(root!=NULL && root1!=NULL){
        if(root->data==root1->data && compare(root->right,root1->right) && compare(root->left,root1->left)){
            return 1;
        }
    }
        return 0;
}
node *find(node *root, int key){
    while(root!=NULL){
        if (root->data==key){
            return (root);
        }
        if(key>root->data){
            root=root->right;
        }
        else
        root=root->left;
    }
    return NULL;
}
node *delete(node *root, int x){
    node *temp;
    if(root==NULL){
        printf("ELEMENT NOT FOUND\n");
        return root;
    }
    if(x>root->data){
        root->right=delete(root->right,x);
        return (root);
    }
    if(x<root->data){
        root->left=delete(root->left,x);
        return (root);
    }
    if(root->left==NULL && root->right==NULL){
        temp=root;
        free(temp);
        return (NULL);
    }
    if(root->right==NULL){
        temp=root;
        root=root->right;
        free(temp);
        return (root);
    }
    if(root->left==NULL){
        temp=root;
        root=root->left;
        free(temp);
        return (root);
    }
    temp=root->right;
    while(temp->left!=NULL){
        temp=temp->left;
        root->data=temp->data;
        root->right=delete(root->right, temp->data);
        return (root);
    }
}

node *inorderpredecessor(node *root){
    root= root->left;
    while(root->right==NULL){
        root=root->right;
    }
    return root;
}
node *delete(node *root, int x){
    node *ipre;
    if(root==NULL){
        printf("element not found\n");
    }
    if(root->right==NULL && root->left==NULL){
        free (root);
    }
    if(root->data>x){
        delete(root->left,x);
    }
    if(root->data<x){
        delete(root->right,x);
    }
    else{
        ipre=inorderpredecessor(root);
        root->data=ipre->data;
        delete(root->left, ipre->data);
    }
    return (root);
}