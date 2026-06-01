/*Use library function to calculate the
square  of a number given by user*/

#include<stdio.h>

void Library(int square);

int main(){
int a;
printf("Enter a number:");
scanf("%d",&a);
Library(a);
return 0;
}

void Library(int square){
square = square*square;
printf("The final ans is : %d", square);
}
