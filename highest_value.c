#include <stdio.h>

int main() {
    int x1, x2, x3, x4, x5;
    
    printf("Input 5 integers: ");
    if (scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5) != 5) {
        printf("Invalid input.\n");
        return 1;
    }

    int max = x1;
    int position = 1;

    if (x2 > max) {
        max = x2;
        position = 2;
    }
    if (x3 > max) {
        max = x3;
        position = 3;
    }
    if (x4 > max) {
        max = x4;
        position = 4;
    }
    if (x5 > max) {
        max = x5;
        position = 5;
    }

    printf("Highest value: %d\n", max);
    printf("Input position: %d\n", position);

}
