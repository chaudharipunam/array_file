/*

Enter 7 numbers:
Element 1: 
1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 5
Element 6: 6
Element 7: 7
Yes

*/

#include <stdio.h>
int main() {
    int arr[7]; 
    printf("Enter 7 numbers:\n");
    for (int i = 0; i < 7; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int isConsecutive = 1;
    for (int i = 1; i < 7; i++) {
        if (arr[i] != arr[i - 1] + 1) {
            isConsecutive = 0;
            break;
        }
    }
    if (isConsecutive) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}

