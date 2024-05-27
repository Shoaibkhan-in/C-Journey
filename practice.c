#include <stdio.h>
#include <Stdlib.h>

int main (){
    int a=10, b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d and %d ", a, b);
}