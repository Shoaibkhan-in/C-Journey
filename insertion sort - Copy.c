#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *a, int n){
int key; 
int j;
int temp;
    for (int i=1; i<=n-1; i++){
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]= a[j];
            j--;
        }
        a[j+1]= key;
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
    printf("Enter the number of element you want to enter\n");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    insertionsort(a,n);
    printArray(a, n);
}