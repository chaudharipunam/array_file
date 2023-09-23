#include <stdio.h>
int main()
{
   int n,a;
   printf("enter the num: ");
   scanf("%d",&n);
   int m=0,sm=0,tm=0;
   for(int i=1; i<=n; i++){
     scanf("%d",&a);
     if(a>m){
       tm=sm;
       sm=m;
       m=a;
     }
     else if(a>sm && a!=m){
       tm=sm;
       sm=a;
     }
     else if(a>tm && a!=m && a!=sm){
       tm=a;
     }
   }
   printf("%d is third max",tm);
   return 0;
}
