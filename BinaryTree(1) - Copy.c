#include <stdio.h>
#include "BinaryTree(1).h"

void main(){
    node *root, *s;
    root=init(root);
    int x, choices;
    do {
        printf("Enter the choice :-\n 1:INSERT\n 2:Inorder\n 3:Preorder\n 4:Postorder\n 5:Search\n 0:For Exit\n");
        scanf("%d", &choices);
        switch(choices){
            case 1:
            printf("Enter the key to be inserted\n");
            scanf("%d", &x);
            root=insert(root, x);
            break;
            case 2:
            inorder (root);
            break;
            case 3:
            preorder(root);
            break;
            case 4:
            postorder(root);
            case 5:
            printf("Enter the key to be searched \n");
            scanf("%d", &x);
            s=search(root, x);
            if(s==NULL){
                printf("***NOT FOUND ***");
            }
            else{
                printf("***FOUND***");
            }
            break;
        }
    }while(choices!=0);
}