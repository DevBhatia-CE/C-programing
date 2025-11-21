#include <stdio.h>

int main() {
    int i, j,row;
    printf("Enter no. of rows :");
    scanf("%d",&row);
    for (i = 1; i <= row; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("This program is made by Dev Bhatia 25CE007");
    return 0;
}
