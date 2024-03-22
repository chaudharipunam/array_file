#include <stdio.h>
int main()
{
  int i,n;
  printf("enter the number: ");
  scanf("%d",&n);
  int arr[n];
  for(i=0; i<n; i++){
    printf("number is: ");
    scanf("%d ",&arr[i]);
  }
  
  for(int j=0; j<n; j++){
    printf("%d ",arr[j]);
  }
  printf("\n");
  return 0;
}
