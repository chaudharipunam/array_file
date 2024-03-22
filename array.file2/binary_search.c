#include <stdio.h>
int main()
{
     int arr[7]={5,12,15,20,25,30,50};
     int n=7,x;
     //high means n-1
     printf("enter the number: ");
     scanf("%d",&x);
     int low=0, high=n-1; 
     while(low<=high){//i means low
       int mid=(low+high)/2;
       if(x==arr[mid]){
         printf("%d number is found on indexing %d",x,mid);
         break;
       }
       else if(x<arr[mid]){
         high=mid-1;
       }
       else{
         low=mid+1;
       }
     }
     if(low>high){
       printf("%d is not found in the array.\n", x);
    }
     return 0;
}
/*
//.........uncomplete...........
#include <stdio.h>
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    int end=n-1,s,mid;
    printf("s is: ");
    scanf("%d",&s);
    int start=0;
    while(start<=end){
      mid=(start+end)/2;
      if(s==arr[mid]){
        printf("%d is found",s);
        break;
      }
      else if(s>arr[mid]){
        start=mid+1;
      }
      else{
        end=mid-1;
      }
    }
    return 0;
}

*/
