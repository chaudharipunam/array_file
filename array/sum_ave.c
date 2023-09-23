#include <stdio.h>
int main()
{
   int n,k,average;
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     printf("enter the num for k: ");
     scanf("%d",&k);
     arr[i]=k;
   }
   int sum=0;
   for(int j=0; j<n; j++){
     sum+=arr[j];
   }
   average=(sum/n);
   printf("%d %d",sum,average);
   return 0;
}



