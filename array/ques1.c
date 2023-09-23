#include <stdio.h>
int main()
{
   int n;
   printf("enter the  num: ");
   scanf("%d",&n);
   int arr[n],r;
   int em_arr[n],p,q;
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   for(int i=0; i<n; i++){
     int sum=0,a;
     for(int j=i+1; j<n-1; j++){
       a=arr[i]+arr[j]+arr[j+1];
       sum=sum+a;
       p=sum;
     }
     em_arr[q]=p;
     q++;
   }
   for(int k=0; k<n-2; k++){
     printf(" %d",em_arr[k]);
   }
   printf(" %d %d",arr[n-2],arr[n-1]);
   
   return 0;
}

