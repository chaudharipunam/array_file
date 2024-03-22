#include <stdio.h>
#include <math.h>
int main(){
  int n,i=1,p=0,r;
  printf("enter the num: ");
  scanf("%d",&n);
  int arr[n];
  for(; i<=n; i++){
    int j=i,c=0;
    while (j>0){
      r=j%10;
      c++;
      j=j/10;
    }
    int k=i;
    int sum=0;
    while (k>0){
      int b=k%10;
      int t=pow(b,c);
      sum=sum+t;
      k/=10;
    }
    if(sum==i){
      arr[p]=i;
      p++;
    }
  }
  for(int s=0; s<p; s++){
    printf(" %d",arr[s]);
  }
  return 0;
}

/*


//.......armstrong number up to N.......
#include <stdio.h>
#include <math.h>
int main()
{
   int n,s=0,r,d,t;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int j=1; j<=n; j++){
     int c=0;
     int i=j;
     while(i>0){
       r=i%10;
       c++;
       i=i/10;
     }
     int p=j,sum=0;
     while(p>0){
       d=p%10;
       t=pow(d,c);
       sum+=t;
       p=p/10;
     }
     if(sum==j){
       arr[s]=j;
       s++;
     }
   }
   for(int k=0; k<s; k++){
     printf(" %d",arr[k]);
   }
   return 0;
}

*/




