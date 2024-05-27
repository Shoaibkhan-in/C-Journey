#include <stdio.h>
#include <stdlib.h>

int main (){
    int i,j,k,n,a[10][10], indeg[10],flag[10],count=0;

    printf("Enter The No Of Vertices:-\n");
    scanf("%d", &n);

    printf("Enter The Adjecency Matrix\n");
    for(i=0; i<n; i++){
        printf("Enter The Row %d\n", i+1);
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            indeg[i]=indeg[i]+a[j][i];
        }
    }
    printf("The Topological Order is \n");
    while(count<n){
        for (k=0; k<n; k++){
            if((indeg[k]==0)&& flag[k]==0){
                printf("%d ", k+1);
                flag[k]=1;
            }
            for(i=0; i<n; i++){
                if(a[i][k]==1)
                indeg[k]--;
            }
        }
        count++;
    }
    return 0;
}