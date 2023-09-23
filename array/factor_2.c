#include <stdio.h>
int main()
{
   int n,i=0;
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   for(int m=1; m<n; m++){
       if(n%m==0){
         arr[i]=m; 
         i++;
       }
   }
   for(int j=0; j<i; j++){
     printf("%d ",arr[j]);
   }
   return 0;
}
