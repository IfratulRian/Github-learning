#include<stdio.h>

float convertCel(float cel);

int main(){
float cel;
printf("Enter the celsius degree: ");
scanf("%f",&cel);
convertCel(cel);
printf("%.2f celsius is %.2f in fahrenheit",cel,convertCel(cel));
return 0;
}

float convertCel(float cel){
float far = cel*(9.00/5.00)+32;
return far;
}
