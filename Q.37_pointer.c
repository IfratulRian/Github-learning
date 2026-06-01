#include<stdio.h>

int main(){
int i;
int *ptr = &i;
int **pptr= &ptr;

printf("Enter i = ");
scanf("%d",&i);
printf("%d\n",**pptr);//*pptr will go  to *ptr and **pptr will go to i and print that value
return 0;

}
