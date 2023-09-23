#include <stdio.h>
int main()
{
   int f_arr[6]={5,4,9,3,6,1};
   int s_arr[5]={2,7,3,9,6};
   int n=6,m=5,i=0;
   int a=n+m,em_arr[a];
   for(int a1=0; a1<n; a1++){
     em_arr[i]=f_arr[a1];
     i++;
   }
   for(int a2=0; a2<m; a2++){
     em_arr[i]=s_arr[a2];
     i++;
   }
   for(int j=0; j<a; j++){
     printf(" %d",em_arr[j]);
   }
   return 0;
}
