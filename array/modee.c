#include <stdio.h>
int main()
{
   int maxc=0,mode=0;
   int arr[8]={5,9,6,4,6,8,6,9};
   int n=8;
   for(int i=0; i<n;  i++){
   int c=0;
     for(int j=0; j<n; j++){
       if(arr[i]==arr[j]){
         c++;
       }
     }
     if(c>maxc){
       maxc=c;
       mode=arr[i];
     }
   }
   printf("%d is the mode\n", mode);
   return 0;
}
