#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void bubblesort(int *a, int n){
    int temp;
    for (int i=0; i<n-i; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void insertsort(int *a, int n){
    int j, key;
    for (int i=1; i<=n-1; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int main (){
int *a, n;
printf("Enter the no data you want to be sorted\n");
scanf("%d", &n);
printf("Enter the data in Array:- \n");
for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
}
printf("Array before sorting :- \n");
printArray(a,n);
pid_t pid;
pid=fork();
if(pid==0){
    printf("This Is Child Process\n");
    bubblesort(a,n);
    printArray(a,n);
}
else{
    printf("This Is Parent Process\n");
    insertsort(a,n);
    printArray(a,n);
}
}
