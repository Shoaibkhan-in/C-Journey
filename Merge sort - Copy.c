#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int mid, int low, int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int b[100];
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k]=a[i];
            k++, i++;
        }
        else{
            b[k]=a[j];
            k++,j++;
        }
    }
    while (i<=mid){
        b[k]=a[i];
        k++, i++;
    }
    while (j<=high){
        b[k]=a[j];
        k++, j++;
    }
    for( int i=low; i<=high; i++){
        a[i]=b[i];
    }
}

void MergeSort(int *a, int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        merge(a, mid, low, high);
    }

}
int main(){
    int a[]={66,4,6,7,3,76};
    int n=6;
    MergeSort(a, 0, 5);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}