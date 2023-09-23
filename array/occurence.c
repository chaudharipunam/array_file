#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    int numForCount;
    printf("Enter the number for count: ");
    scanf("%d",&numForCount);
    int c=0; 
    for(int i=0; i<n; i++){
      if(arr[i] == numForCount){
        c++;
      }
    }
    printf("Total occurrences of %d in the array: %d\n", numForCount,c);
    return 0;
}

