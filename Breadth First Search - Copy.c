#include <stdio.h>
#include <stdlib.h>
int a[100][100], q[100], visited[100],n,f=-1,r=-1; 
void bfs(int v){
    int i;
    for (i=0; i<n; i++){
        if(visited[i]==0 && a[v][i]!=0){
            r=r+1;
            q[r]=i;
            visited[i]=1;
            printf("%d ",i );
        }
    }
    f=f+1;
    if(f<=r){
        bfs(q[r]);
    }
}
int main(){
    int i,j,v;
    printf("Enter The Number Of Vertices\n");
    scanf("%d", &n);
    printf("Enter The Data In Matrix Form\n");
    for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter The Startig Vertex\n");
    scanf("%d", &v);
    f=r=0;
    q[r]=v;
    printf("\n BFS Traversal Is :\n");
    visited[v]=1;
    printf("%d", v);
    bfs(v);
    if(r != n-1)
    printf("BFS Traversal Is Not Possible\n");
}