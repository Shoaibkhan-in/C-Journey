#include <stdio.h>
#include <stdlib.h>
int i,j,G[100][100],n, in, out , total, choice;
int indegree(int v){
    int in=0; 
    j=1; 
    while(j<=n){
        in=in+(G[i][v]);
        j++;
    }
    return (in);
}
int outdegree(int v){
    int out=0;
    j=1;
    while(j<=n){
        out=out+(G[v][j]);
        j++;
    }
    return (out);
}
int totaldegree(int v, int in, int out){
    int total=0;
    j=1;
    while(j<=n){
        total=in+out;
        j++;
    }
    return (total);
}
void display(){
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf(" %d ", G[i][j]);
        }
        printf("\n");
    }
}
void create(int n){
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            G[i][j]=0;
            if(i!=j){
                printf("Is There An A Edge Between %d ----> %d", i, j);
                scanf("%d", &G[i][j]);
            }
            printf("\n");
        }
    }
}
void main(){
printf("Enter How Many Edges\n");
scanf("%d", &n);
create(n);
display();
printf("indegree of vertices is out degree and total degree \n");
for (i=1; i<=n ; i++){
    in=indegree(i);
    printf("V(%d):- %d\n", i, in);
    out=outdegree(i);
    printf("V(%d):- %d\n", i, out);
    total=totaldegree(i, in, out);
    printf("V(%d):- %d\n", i, total);
}

}