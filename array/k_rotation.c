#include <stdio.h>
int main()
{  
   int n,k,p;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   int s_arr[n],s,j=0,m=1;
   printf("enter the value of s: ");
   scanf ("%d",&s);
   int l=0;
   while(l<n){
     int r=0;
     while(r<j){
       if(s_arr[r]=arr[l]){
         l++;
       }
       else{
         r++;
       }
     }
     if(m==k){
       s_arr[j]=arr[l];
       j++;
       k+=3;
     }
     else{
       m++;
     }
   }
   if(l==n){
     l=0;
   }
   else{
     for (int h=0; h<n; h++){
       printf("%d ",arr[h]);
     }
   }

   return 0;
}
   
