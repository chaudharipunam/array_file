#include <stdio.h>
int main()
{
   int n,i,name;
   printf("enter the number: ");
   scanf("%d",&n);
   char arr[n];
   for(i=0; i<n; i++){
     printf("name is: ");
     scanf("%d",&name); 
     arr[i]=name;
   }
   for(j=0; j<n; j++){
     printf("%d",arr[j]);
   }
   return 0;
}
