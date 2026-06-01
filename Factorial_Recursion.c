//factorial of n
#include<stdio.h>

int Factorial(int n);

int main(){
int n;
printf("Enter a number for factorial: ");
scanf("%d", &n);
Factorial(n);
printf("The factorial of %d is %d",n,Factorial(n));
return 0;
}

int Factorial(int n){
if (n==1)
    return 1;
return n * Factorial(n-1);
}
