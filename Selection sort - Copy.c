#include <stdio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionsort(int *a, int n){
    int min, temp; 
    for (int i=0; i<n-1; i++){
        min=i; 
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
int main (){
    int a[]={5,4,3,2,1};
    int n=5;
    selectionsort(a,  n);
    printArray( a, n);
}