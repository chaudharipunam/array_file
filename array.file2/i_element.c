
#include <stdio.h>
int main()
{
  int arr[7]={10,12,34,11,4,5,1};
  int n=7;
  int i;
  printf("Enter the value of 'i': ");
  scanf("%d", &i);
  if(i>n){
    printf("'i'  is larger than the array length.");
    return  1;
  }
  printf("last %d elements: ",i);
  for(int j=n-i; j<n; j++){
    printf("%d ",arr[j]);
    if (j<n-1){
      printf(", ");
    }
  }
  printf("\n");
  return 0;
}
   
  
