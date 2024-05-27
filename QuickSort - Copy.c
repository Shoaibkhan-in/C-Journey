#include <stdio.h>
#include <stdlib.h>

int partition(int *a, int low, int high){
    int pivot=a[low];
    int i=low+1;
    int j=high; 
    int temp;
    do{
    while(a[i]<=pivot){
        i++;
    }
    while (a[j]>pivot){
        j--;
    }
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}while(i<j);
temp=a[low];
a[low]=a[j];
a[j]=temp;
return j;
}
void Quicksort(int *a, int low , int high){
    int partitionindex;
    if(low<high){
    partitionindex= partition(a, low , high);
    Quicksort(a, low, partitionindex-1);
    Quicksort(a, partitionindex+1, high);
}
}
int main (){
    int n;
    int a[n];
    printf("enter input for sorting data\n");
    scanf("%d", &n);
    printf("enter the data in array\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    Quicksort(a, 0, n-1);
    for (int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}