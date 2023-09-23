#include <stdio.h>
int main()
{
   int n,p=1;
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     arr[i]=p;
     p+=2;
   }
   for(int j=0; j<n; j++){
     printf("%d ",arr[j]);
   }
   printf("\n");
   return 0;
}


