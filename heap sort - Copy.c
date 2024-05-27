#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b){
    int temp;
    temp=*a; 
    *a=*b;
    *b=temp;
}
void heapify(int a[], int n, int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    if(l<=n && a[l]>a[largest]){
        largest = l;
    }
    if (r<=n && a[r]>a[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(&a[i], &a[largest]);
        heapify(a,n,largest);
    }
}
void BuildHeap(int a[], int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(a,n,i);
    }
}
void heapsort(int a[], int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(a,n,i);
    }
    for (int i=n-1; i>=0; i--){
        swap(&a[0],&a[i]);
        heapify(a, i, 0);
    }
}
int main(){
    int a[]={5,3,2,2,5,1,15,7,6,2};
    int n=10;
    heapsort(a,n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
