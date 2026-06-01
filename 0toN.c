// This program prints all numbers from 0 to n, inclusive.
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
//i don't know why this is not working