#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int age;
    int salary;
}RECORD;
RECORD employee[500];

int readf(RECORD *a){
    FILE *fp;
    int i;
    if ((fp=fopen("employees.txt","r"))!=NULL){
        while (!feof(fp)){
            fscanf(fp, "%s%d%d", a[i].name, &a[i].age, &a[i].salary);
            i++;
        }
            return i;
    }
}
void merge(RECORD *a, int l, int m, int u)
{
RECORD c[10];
int i, j, k;
i = l;

j = m + 1;
k = 0;
while (i <= m && j <= u)
{
if (a[i].age < a[j].age)
{
c[k] = a[i];
k++;
i++;
}
else
{
c[k] = a[j];k++;
j++;
}
}
while (i <= m)
{
c[k] = a[i];
i++;
k++;
}
while (j <= u)
{
c[k] = a[j];
k++;
j++;
}
for (i = l, j = 0; i <= u; i++, j++)
a[i] = c[j];

}
void merge_sort( RECORD *a, int i, int j)
{
int k = 0;
if (i < j)
{
k = (i + j) / 2;
merge_sort(a, i, k);
merge_sort(a, k + 1, j);
merge(a, i, k, j);
}
}



void writef( RECORD *a, int n){
    FILE *fp1;
    if((fp1=fopen("sorted.txt","w"))!=NULL){
    for (int i=0; i<n; i++){
        fprintf(fp1, "%s %d %d\n", a[i].name, a[i].age, a[i].salary);
    }
    }
}

int main(){
    int n;
    n=readf(employee);
    merge_sort(employee,0, n-1);
    writef(employee, n);
}