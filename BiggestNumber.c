/*Find the Biggest number*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a, b, c:");
    scanf("%d, %d, %d", &a , &b, &c);
    if(a>b && a>c){
        printf("Yhe biggest number is a");
    }
    else if(b>a && b>c){
        printf("The biggest number is b");
    }
    else printf("The biggest number is c");
    return 0;
}