#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main  (){
    int counter=1;
    for(int i=0; i<3; i++){
        for( int j=0; j<5; j++){
            counter++;
            if(prime(counter) && counter!=4 && counter <=15){
                printf("%d.%d.%d.%d \t", prime(counter), sumOfDigit(prime(counter)), factorial(counter), sumOfDigit(factorial(counter)));
            }
        }
        printf("\n");
    }
}