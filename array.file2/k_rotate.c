
#include <stdio.h>
int main()
{
   int arr[5]={3,6,7,5,10};
   int k,m=k-1,n=5,r,s;
   printf("enter the num: ");
   scanf("%d",&k);
   for(int i=0; i<n-k-1; i++){
     int p[n];
     for(int j=0; j<n; j++){
       int s[n];
       for(int t=i; t<m; t++){
         int s=s+arr[t];
       }
       int f=t;
       p=p+arr[f];
     }
     r=p+s;
     m++;
   }
   printf("%d",r);
   return 0;
}
