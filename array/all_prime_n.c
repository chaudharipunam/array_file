#include <stdio.h>
int main()
{
   int n;
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   int m=2;
   for(int i=0; i<n; m++){
   int count=0;
     for(int j=1; j<=m; j++){
       if(m%j==0){
         count++;
       }
     }
     if(count==2){
       arr[i]=m;
       i++;
     }
   }
   for(int k=0; k<n; k++){
     printf("%d ",arr[k]);
   }
   printf("\n");
   return 0;
}


