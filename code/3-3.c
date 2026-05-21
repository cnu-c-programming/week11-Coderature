#include <stdio.h>
#include <string.h>

void sort_strings(char *arr[], int n, int (*cmp)(const char *, const char *)) {
    int i;
    int j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (cmp(arr[j], arr[j + 1]) > 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_strings(char *arr[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char *fruits[] = {"banana", "apple", "orange", "ant"};
    int n = 4;

    sort_strings(fruits, n, strcmp);
    print_strings(fruits, n);
    return 0;
}
