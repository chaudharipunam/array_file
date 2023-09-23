// insertion sort
#include<stdio.h>
int main() {
    int i, j, temp;
    int a[5] = {9, 3, 4, 6, 7};
    for (i = 1; i < 5; i++) {
        temp = a[i];
        j = i;
        while (j > 0 && a[j - 1] > temp) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = temp;
    }
    for (j = 0; j < 5; j++) {
        printf("%d ", a[j]);
    }
    return 0;
}
