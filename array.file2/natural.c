#include <stdio.h>
int main() {
    int n ;
    printf("enter the number: ");
    scanf("%d",&n);
    int naturalNumbers[n]; 
    for (int i = 0; i < n; i++) {
        naturalNumbers[i] = i + 1;
    }
    printf("Array of natural numbers :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", naturalNumbers[i]);
    }
    return 0;
}

