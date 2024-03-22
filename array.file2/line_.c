#include <stdio.h>
int main(){
   int n;
   printf("N is: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   for(int i=0; i<n; i++){
     for(int j=0; j<arr[i]; j++){
       printf("_ ");
     }
     printf("\n");
   }
   return 0;
}
