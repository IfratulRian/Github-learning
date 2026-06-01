/*keep taking numbers as input from user until user enters an odd number*/
#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number:");
        scanf("%d", &n);
    }while(n%2==0); //if the number is even, then continue the loop
    //if the number is odd, then come out of the loop
    return 0;
}