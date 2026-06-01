#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);

    swap(&x,&y);  // pass addresses

    printf("x = %d & y = %d\n", x, y); // now swapped
    return 0;
}

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("a = %d & b = %d\n", *a, *b);
}
