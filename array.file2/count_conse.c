#include <stdio.h>
int main()
{
   int arr[10]={}; 
   int c=0, n=10;
   for(int i=0; i<n; i++){
     if(arr[i]==arr[i-1]){
       c++;
     }
   }
   printf("%d\n",c);
   return 0;
}
