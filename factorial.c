/*Print the factorial of a number n*/
#include<stdio.h>
int main(){
    int n, fact = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
        fact = fact * i; //fact *= i
    }
    printf("The factorial is %d", fact);
    return 0;
}
/*when n is large (e.g., >12), the result no longer fits inside int. The stored value “wraps around” and becomes meaningless (negative or random-looking number). */