//Write a program in C to find the maximum number
//between two numbers using a pointer.

#include<stdio.h>

int main(){
int a , b;
int *p1,*p2;

printf("Enter two number:");
scanf("%d\n%d", &a, &b);

p1 = &a;
p2 = &b;

if(*p1>*p2){
    printf("The biggest number is %d",*p1);
}
else{
    printf("The biggest number is %d",*p2);
}
return 0;
}
