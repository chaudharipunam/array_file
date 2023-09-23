#include <stdio.h>
int main()
{
   int n,count;
   printf("enter the number: ");
   scanf("%d",&n);
   int arr[n];
   count=0;
   for(int num=2; num<n; num++){
     int sum=1;
     for(int i=2; i*i<=num; i++){
       if(num%i==0){
         sum+=i;
         if(i*i!=num){
           sum+=num/i;
         }
       }
     }
     if(sum==num){
       arr[count]=num;
       count++;
     }
   }
   for(int k=0; k<count; k++){
        printf("%d ",arr[k]);
   }
   printf("\n");
   return 0;
}
   
