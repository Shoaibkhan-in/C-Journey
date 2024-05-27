#include <stdio.h>
#include <stdlib.h>
int n, G[100][100], i, j;
void display(){
    int i,j;
    printf("Adjacency Matrix\n");
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf(" %d ", G[i][j]);
        }
        printf("\n");
    }
}
void create(int n){
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            G[i][j]=0;
            if(i!=j){
                printf("Is There A Edge Between %d ----> %d(0/1)\n",i,j);
                scanf("%d", &G[i][j]);
            }
        }
    }
}
void main (){
    printf("enter the number of vertices\n");
    scanf("%d", &n);
create(n);
display();
}