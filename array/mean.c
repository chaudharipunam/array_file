#include <stdio.h>
int main()
{
     int n,p,sum=0;
     printf("emter the num: ");
     scanf("%d",&n);
     int arr[n];
     for(int i=0; i<n; i++){
       printf("p is: ");
       scanf("%d",&p);
       arr[i]=p;
       sum+=p;
     }
     int mean=sum/n;
     printf("%d is mean",mean);
     return 0;
}


