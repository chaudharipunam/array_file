#include<stdio.h>
int main()
{
   int arr[6]={5,4,9,2,1,0};
   int n=6,p=0;
   int arr2[6];
   for(int i=n-1; i>=0; i--){
     arr2[p]=arr[i];
     p++; 
   }
   for(int j=0; j<n; j++){
     printf("%d ",arr2[j]);
   }
   return 0;
}
  
