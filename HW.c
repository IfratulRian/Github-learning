//Write a function to find sum of digits of a number.

#include <stdio.h>

int sum(int a);

int main(){
    int a ;
printf("Enter the value of a : ");
scanf("%d", &a);
printf("sum : %d\n", sum(a));
return 0;
}
int sum(int a){
if(a==0)
    return 0;
return (a%10)+sum(a/10);
}
