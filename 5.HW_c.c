/*Write a function to print "Hot" or "Cold" depending
on the temperature user enters.*/
#include<stdio.h>
#include<math.h>

void Temprature(double n);

int main(){
double n;
printf("Enter temprature : ");
scanf("%lf",&n);
Temprature(n);
return 0;
}
void Temprature(double n) {
if(n<32){
    printf("cold");
}
else {
    printf("hot");
}
}
