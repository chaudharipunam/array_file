#include <stdio.h>
int main() {
    int arr[8] = {5,36,14,27,18,43,33,91};
    int n = 8;
    int sum = 0;
    int av, p, b;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    av = sum / n;
    printf("%d is the mean\n", av);
    int maxCount = 0;
    int mode = 0;
    for (int s = 0; s < n; s++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[s] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[s];
        }
    }
    printf("%d is the mode\n", mode);
    for (int p = 0; p < n; p++) {
        for (int q = p + 1; q < n; q++) {
            if (arr[p] > arr[q]) {
                int temp = arr[p];
                arr[p] = arr[q];
                arr[q] = temp;
            }
        }
    }
    if (n % 2 == 0) {
        p = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        printf("%d is the median\n", p);
    } else {
        b = arr[n / 2];
        printf("%d is the median\n", b);
    }
    return 0;
}




   
