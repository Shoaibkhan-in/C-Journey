#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
{
char name[20];
};
void insertsort(struct employee emp[],int num)
{
struct employee temp;
int i,j;
for(i=1;i<num;i++)
{
temp=emp[i];
for(j=i-1;j>=0 && strcmp(emp[j].name,temp.name)>0;j--)
{
emp[j+1]=emp[j];
}
emp[j+1]=temp;
}
}
int readf(struct employee *emp){
    FILE *fp;
    int i=0;
    fp=fopen("employee1.txt", "r");
    if(fp!=NULL){
        while(!feof(fp)){
            fscanf(fp, "%s", emp[i].name);
            i++;
        }
        return i;
    }
}
void writef(struct employee *emp, int n){
    FILE *fp=fopen("sorted1.txt", "w");
    if(fp!=NULL){
        for (int i=0; i<n; i++){
            fprintf(fp, "%s\n", emp[i].name);
        }
    }
}
int main()
{
struct employee emp[10];
int n;
n=readf(emp);
insertsort(emp, n);
writef(emp, n);
}