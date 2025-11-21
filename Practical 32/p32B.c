#include <stdio.h>
int main() {
    FILE* fp;
    int n, marks;
    fp = fopen("marks.dat", "wb");
    if (!fp) return 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter marks: ");
        scanf("%d", &marks);
        putw(marks, fp);
    }
    fclose(fp);
    fp = fopen("marks.dat", "rb");
    if (!fp) return 0;
    printf("\nStored Marks:\n");
    while (!feof(fp)) {
        marks = getw(fp);
        if (!feof(fp)) printf("%d\n", marks);
    }
    fclose(fp);
    printf("This program is made by Dev Bhatia 25CE007");
    return 0;
}
