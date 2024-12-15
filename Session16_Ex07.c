#include <stdio.h>

void sapXepTangDan(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {8, 3, 5, 1, 9, 6, 2, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    sapXepTangDan(arr, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
