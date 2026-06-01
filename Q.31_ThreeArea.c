#include<stdio.h>
#include<math.h>

void Square(double side);
void circle(double radius);
void rectangle(double x,double y);

int main(){
double side,radius,a,b;
printf("Enter the a value of side : ");
scanf("%lf",&side);
Square(side);
printf("Enter the a value of radius : ");
scanf("%lf",&radius);
circle(radius);
printf("Enter the a value of a : ");
scanf("%lf",&a);
printf("Enter the a value of b : ");
scanf("%lf",&b);
rectangle(a,b);
return 0;
}


void Square(double side){
printf("Area of the square is : %lf\n",pow(side,2));
}

void circle(double radius){
printf("Area of the circle is : %lf\n",3.1416*pow(radius,2));
}

void rectangle(double x,double y){
double area;
area=x*y;
printf("The area of rectangle is : %lf\n",area);
}   