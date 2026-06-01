/*identify if he is rian or not*/
#include <stdio.h>

int main() {
    int black;
    int longHeight;
    int tshirt;

    scanf("%d %d %d", &black, &longHeight, &tshirt);

    if (black && longHeight && tshirt) {
        printf("He is rian\n");
    } else {
        printf("He is not rian\n");
    }

    return 0;
}
