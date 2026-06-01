/*create a 2D array, storing the tables of 2 and 3*/
#include <stdio.h>
void storeTable(int arr[][10], int n, int m, int number);
int main(){
    int table[2][10];
    storeTable(table, 0, 10, 2);
    storeTable(table, 1, 10, 3);
    return 0;
}

void storeTable(int arr[][10], int n, int m, int number){
    for(int i = 0; i<m;i++){
        arr[n][m] = number * (i+1);
        printf("%d\t", arr[n][m]);
    }
}