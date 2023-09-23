#include <stdio.h>
int main()
{
   int n,p;
   printf("enter the num: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&p);
     arr[i]=p;
   }
   int s;
   printf("enter the num:  ");
   scanf("%d",&s);
   for(int i=0; i<n; i++){
     int p=0;
     for(int j=i; j<n; j++){
       p+=arr[j];
       if(p==s){
         printf("subarray found with %d sum: ",s);
         for(int k=i; k<=j; k++){
           printf("%d ",arr[k]);
         }
       }
     }
   }
   return 0;
}

