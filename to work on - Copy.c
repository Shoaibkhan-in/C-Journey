#include <stdio.h>
#include <stdlib.h>

int main (){

int a[100];
int i, n, totalsum=0, sum=0, missing ;
printf("Enter the size of array \n");
scanf("%d", &n);

for (i=0; i<n; i++){
printf("please enter the value %d", i+1);
scanf("%d", &a[i]);
sum= sum+a[i];
}
totalsum= (n+1)*(n+2)/2;
missing= totalsum-sum;
printf("The number missing in array %d", missing);
}