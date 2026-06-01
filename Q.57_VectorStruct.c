#include <stdio.h>
#include <string.h>


struct vector{
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main(){
    struct vector v1 = {3, 4};
    struct vector v2 = {1, 2};

    struct vector sum; 
    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x : %d\n", sum.x);
    printf("sum of y : %d\n", sum.y);
}