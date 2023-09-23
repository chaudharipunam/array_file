#include <stdio.h>
int main() {
    int arr[100]; 
    int n; 
    int positiveCount = 0; 
    int negativeCount = 0; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
    }
    printf("Count of positive elements: %d\n", positiveCount);
    printf("Count of negative elements: %d\n", negativeCount);
    return 0;
}

