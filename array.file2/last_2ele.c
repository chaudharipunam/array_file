#include <stdio.h>

int main() {
    int arr[7] = {9, 5, 6, 2, 1, 12, 5};
    int n=7;
    if (n>= 2) {
        printf("Last two elements of the array:%d,%d\n",arr[n- 2], arr[n-1]);
    } else {
        printf("Array has less than two elements.\n");
    }
    return 0;
}

