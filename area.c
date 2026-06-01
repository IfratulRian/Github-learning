    /*a. Write a program to calculate perimeter of rectangle.
Take sides, a & b, from the user.*/
# include <stdio.h>
int main() {
    int a, b;
    printf("Enter length of rectangle: ");
    scanf("%d", &a);
    printf("Enter hight of rectangle: ");
    scanf("%d", &b);
    int area = (a * b);
    printf("Area of rectangle is %d", area);
    return 0;
}