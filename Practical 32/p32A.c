#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse(char* s, int start, int end) {
    while (start < end) {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}
int main() {
    FILE* fp = fopen("Demo.txt", "r");
    if (!fp) {
        printf("File not found");
        return 0;
    }
    char line[500];
    while (fgets(line, sizeof(line), fp)) {
        int i = 0;
        while (line[i] != '\0') {
            if (!isspace(line[i])) {
                int start = i;
                while (line[i] != '\0' && !isspace(line[i])) i++;
                reverse(line, start, i - 1);
            }
            else i++;
        }
        printf("%s", line);
    }
    fclose(fp);
    printf("\nThis program is made by Dev Bhatia 25CE007");
    return 0;
}

