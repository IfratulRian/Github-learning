//Write a function to find square root of a number.
#include<stdio.h>
#include<math.h>

double SquerRoot(double n){
 return sqrt(n);
}
 int main(){
double n;
printf("enter a number : ");
scanf("%lf",&n);
printf("Ans is : %.4lf\n",SquerRoot(n));
return 0;
 }
