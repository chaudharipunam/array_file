/*

#include <stdio.h>
int main()
{
     int arr[5]={5,9,12,20,25};
     int n=5,x;
     printf("enter the number: ");
     scanf("%d",&x);
     int count=0;
     for(int i=0; i<n; i++){
       if(arr[i]==x){
         count++;
       }
     }
     if(count>=1){
       printf("%d this number found in the array",x);
     }
     else{
       printf("%d this number not found in the array",x);
     }
     return 0;
}
*/

#include <stdio.h>
int main()
{
   int n,s; 
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   printf("s is: ");
   scanf("%d",&s);
   for(int j=0; j<n; j++){
     if(arr[j]==s){
       printf("%d is found",s);
     }
   }
   return 0;
}
