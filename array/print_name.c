#include <stdio.h>
#include <string.h>
int main() {
    char names[5][150]; 
    printf("Enter 5 names:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // Read a single word (name) without spaces
    }
    printf("\nEntered names are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

