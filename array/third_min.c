#include <stdio.h>
int main()
{
   int m1,m2,sm1,sm2,tm;
   int a,b,c,d;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if(a<b){
     m1=a;
     sm1=b;
   }
   else{
     m1=b;
     sm1=a;
   }
   if(c<d){
     m2=c;
     sm2=d;
   }
   else{
     m2=d;
     sm2=c;
   }
   if(m1<m2){
     if(m2<sm1){
       tm=m2;
     }
     else{
       tm=sm1;
     }
   }
   else if(m1<sm2){
     tm=m1;
   }
   else{
     tm=sm2;
   }
   printf("%d",tm);
   return 0;
}
