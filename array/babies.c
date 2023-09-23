#include <stdio.h>
int main()
{
   int n,min,sum=0,max=0;
   printf("enter the num: ");
   scanf("%d",&n);
   for(int i=0; i<n;  i++){
     int weight;
     printf("weight is: ");
     scanf("%d",&weight);
     sum+=weight;
     if(i==0){
       min=max=weight; 
     }
     else{
       if(weight<min){
         min=weight;
       }
       if(weight>max){
         max=weight;
       }
     }
   }
   int mean=sum/n;
   printf(" %d is mean weight\n",mean);
   printf(" %d is max weight\n",max);
   printf(" %d is min weight\n",min); 
   return 0; 
}
   
