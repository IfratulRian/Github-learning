
#include<stdio.h>

int main(){
    int cost[3];
    printf("Entert the cost of the 1st item : ");
    scanf("%d", &cost[0]);
    printf("Entert the cost of the 2nd item : ");
    scanf("%d", &cost[1]);
    printf("Entert the cost of the 3rd item : ");
    scanf("%d", &cost[2]);
    printf("1st cost : %d\n2nd cost : %d\n3rd cost : %d\n", cost[0],cost[1],cost[2]);
    double total = (cost[0] + cost[1] + cost[2]) + (cost[0] + cost[1] + cost[2])*0.018;
    printf("Total cost : %.2f\n", total);
    return 0;
}