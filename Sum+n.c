/*print the sum of first n Natural Numbers
&
print thos number in backward*/
#include <stdio.h>
int main(){
    int n, sum=0;
    printf("ENter a number:");
    scanf("%d", &n);
    for( int i=1, j=n; i<=n && j>=1; i++, j--){
        sum = sum + i; //sum +=i
        printf("%d\n", j);
    }
    printf("The sum of first %d natural numbers is %d", n, sum);
    /*
    for(int i=n; i>=1; i--){
        printf("%d\n", i);
    }*/
    
    return 0;
}