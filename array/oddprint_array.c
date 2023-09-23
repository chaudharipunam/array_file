#include <stdio.h>

int main() {
    int arr[8] = {23, 45, 32, 25, 46, 33, 71, 90};
    int n = 8;
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    int oddArr[oddCount];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddArr[index] = arr[i];
            index++;
        }
    }
    for (int j = 0; j < oddCount; j++) {
        printf("%d ", oddArr[j]);
    }
    return 0;
}

