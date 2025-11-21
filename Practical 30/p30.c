#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number");
        return 0;
    }
    float* prices = (float*)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        printf("Enter price %d: ", i + 1);
        scanf("%f", prices + i);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(prices + j) < *(prices + i)) {
                float temp = *(prices + i);
                *(prices + i) = *(prices + j);
                *(prices + j) = temp;
            }
        }
    }
    printf("\nSorted Prices:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", *(prices + i));
    }
    free(prices);
    printf("This program is made by Dev Bhatia 25CE007");
    return 0;
}

