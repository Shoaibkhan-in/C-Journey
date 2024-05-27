#include <stdio.h>
#include "cbtree.h"

void main(){
    node *root, *root1,*p;
    root=init(root);
    root1=init(root1);
    int x, choices,a,b,key,c;
    do {
        printf("Enter the choice :-\n 1:Create\n 2:display\n 3:countnodes\n 4:countleaf\n 5: copy\n 6:compare\n 7: Find\n 8:delete \n0:For Exit\n");
        scanf("%d", &choices);
        switch(choices){
            case 1:
            root=create(root);
            break;
            case 2:
            display (root);
            break;
            case 3:
            printf("The no of nodes present in tree is %d\n", countnodes(root));
            break;
            case 4:
            printf("The no of leaves are present in trees are %d\n", countleaf(root));
            break;
            case 5:
            root1=copy(root);
            break;
            case 6:
            a=compare(root, root1);
            if(a==0){
                printf("The Both Trees Are Not Equal\n");
            }
            else{
                printf("Both Trees Are Equal\n");
            }
            break;
            case 7:
            printf("enter the key to be searched\n");
            scanf("%d", &key);
            p=find(root,key);
            if(p==NULL){
                printf("NOT FOUND\n");
            }
            else{
                printf("***FOUND***\n");
            }
            break;
            case 8:
            printf("Enter the key to be deleted\n");
            scanf("%d", &c);
            root=delete(root,c);
            break;
        }
    }while(choices!=0);
}