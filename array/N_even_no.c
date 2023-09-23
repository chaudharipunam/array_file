#include <stdio.h>
int main()
{
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    arr[i]=2*(i+1);
  }
  for(int j=0; j<n; j++){
    printf("%d ",arr[j]);
  }
  printf("\n");
  return 0;
} 



