#include<stdio.h>
#include<math.h>

long long mypow(int base, int exp){
if(exp==0)
    return 1;
return base*mypow(base, exp - 1);
}

int main(){
int base,exp;
printf("enter base : ");
scanf("%d", &base);
printf("enter exponent : ");
scanf("%d", &exp);

printf("%d^%d = %lld\n",base,exp,mypow(base,exp));
return 0;
}
