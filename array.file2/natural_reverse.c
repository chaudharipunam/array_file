#include <stdio.h>
int main()
{
  int n,p=1;
  printf("enter the number: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    arr[i]=p;
    p++;
  }
  int r=0;
  int arr2[n];
  for(int j=n-1; j>=0; j--){
    arr2[r]=arr[j];
    r++;
  }
  for(int s=0; s<n; s++){
    printf("%d ",arr2[s]);
  }
  return 0;
}
    
   
