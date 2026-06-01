/*Show a number is devisible by 2 or not*/
/*Write a code to check if that number is even or odd*/

#include<stdio.h>
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("The number is devisible by 2");
    }
    else{
        printf("The number is not devisible by 2");
    }
    return 0;
}