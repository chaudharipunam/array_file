#include <stdio.h>
int main()
{
   int f_arr[9]={1,67,8,45,19,23,32,64,47};
   int s_arr[6]={67,8,91,39,4,21};
   int n=9,m=6,mid1,mid2;
   for(int t=0; t<n-1; t++){
     for(int j=0; j<n-t-1; j++){
       if(f_arr[j]>f_arr[j+1]){
         int temp=f_arr[j];
         f_arr[j]=f_arr[j+1];
         f_arr[j+1]=temp;
       }
     }
   }
   
   if(n%2==0){
     mid1=(f_arr[n/2-1]+f_arr[n/2])/2;
   }
   else{
     mid1=f_arr[n/2];
     for(int h=0; h<m-1; h++){
     for(int g=0; g<m-h-1; g++){
       if(s_arr[g]>s_arr[g+1]){
         int temp=s_arr[g];
         s_arr[g]=s_arr[g+1];
         s_arr[g+1]=temp;
       }
     }
   }
     if(m%2==0){
       mid2=(s_arr[m/2-1]+s_arr[m/2])/2;
     }
     else{
       mid2=s_arr[m/2];
     }
   }
   printf("Median of the first array is %d\n", mid1);
   printf("Median of the second array is %d\n", mid2);
   return 0;
}
   
