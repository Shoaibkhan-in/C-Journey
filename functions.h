int prime(int n){
    int flag=1;
    for(int i=2; i<n/2; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        return n;
    }
}

int sumOfDigit(int n)
{
int sum = 0;
while (n != 0)
{
sum = sum + n % 10;
n = n/10;
}
return sum;
}

int factorial(int n){
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else{
        return n*factorial(n-1);
    }
}