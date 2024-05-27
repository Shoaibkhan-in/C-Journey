
#include<stdio.h>
#include<stdlib.h>
void quick_sort(int [],int,int);
void main()
{
int i,n,a[50];
printf("Enter number of element in the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
a[i]=rand()%100;
printf("Unsorted array: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
quick_sort(a,0,n-1);
printf("Sorted array using Quick Sort:");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}
void quick_sort(int a[],int l,int r)
{
 int ltemp=l,rtemp=r,pivot=a[l];
while(l<r)
{
while(pivot<a[r] && l<r)
{
r--;
}
if(l<r)
{
a[l]=a[r];
l++;
}
while(pivot>a[l] && l<r)
{
l++;
}
if(l<r)
{
a[r]=a[l];
r--;
}
}
a[l]=pivot;
if(ltemp<l-1)
{
quick_sort(a,ltemp,l-1);
}
if((r+1) < rtemp)
{
quick_sort(a,r+1,rtemp);
}
}