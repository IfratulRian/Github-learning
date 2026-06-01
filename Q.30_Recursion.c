/*Sum of first n natural numbers*/
#include<stdio.h>
int sum(int n); /*function declaration or function prototype*/
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d\n",n,sum(n)); /*function call*/
    return 0;
}
int sum(int n) /*function definition*/
{
    if(n==1) /*base condition*/
        return 1;//without this line it will go into infinite recursion or you can say crush
    return n + sum(n-1); /*function call*/
    /* here n-1 means 1+2+3+4.......+(n-1)+n=sum */
}
/*Tail Recursion*/
