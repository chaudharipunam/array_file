
#include <stdio.h>
int main()
{
   int n,min;
   printf("enter the number: ");
   scanf("%d",&n);
   if (n <= 0) {
      printf("Invalid input. Please enter a positive number of elements.\n");
      return 0; // Exit with an error code
   }
   int arr[n];
   scanf("%d", &arr[0]);
   min = arr[0];
   for(int i=1; i<n; i++){
     scanf("%d",&arr[i]);
     if(arr[i]<min){
       min=arr[i];
     }
   }
   printf("%d",min);
   return 0;
}


