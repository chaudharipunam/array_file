#include <stdio.h>
int main()
{
  int n,q;
  printf("enter the number: ");
  scanf("%d",&n);
  int  arr[n];
  for(int i=0; i<n; i++){
    printf("num is : ");
    scanf("%d",&q);
    arr[i]=q;
  }
  int max;
  for(int j=0; j<n; j++){
    if(arr[j]>max){
      max=arr[j];
    }
  }
  printf("max is: %d",max);
  return 0;
}
