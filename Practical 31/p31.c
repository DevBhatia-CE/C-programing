#include <stdio.h>
#include <stdlib.h>
int main() {
    int size1, size2;
    char* summary;
    printf("Enter initial summary size: ");
    scanf("%d", &size1);
    getchar();
    summary = (char*)calloc(size1, sizeof(char));
    if (!summary) return 0;
    printf("Enter initial summary: ");
    fgets(summary, size1, stdin);
    printf("Enter new size for expanded summary: ");
    scanf("%d", &size2);
    getchar();
    summary = (char*)realloc(summary, size2 * sizeof(char));
    if (!summary) return 0;
    printf("Enter updated summary: ");
    fgets(summary, size2, stdin);
    printf("\nUpdated Summary:\n%s\n", summary);
    free(summary);
    printf("This program is made by Dev Bhatia 25CE007");
    return 0;
}

