#include <stdio.h>
int main()
{
   int n,p,q,v;
   printf("enter the num: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     printf("input: ");
     scanf("%d",&v);
     arr[i]=v;
   }
   for(int t=0; t<n-1; t++){
     for(int j=0; j<n-t-1; j++){
       if(arr[j]>arr[j+1]){
         int temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
       }
     }
   }
   int meadian;
   if(n%2==0){
     int mid1=arr[n/2-1];
     int mid2=arr[n/2];
     meadian=(mid1+mid2)/2;
   }
   else{
     meadian=arr[n/2];
   }
   printf("Median of the array is: %d\n",meadian);

   return 0;
}
       
 
