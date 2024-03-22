#include <stdio.h>
int main()
{
  int arr[7]={1,2,3,4,5,6,7};
  int n=7;
  int i=0,p;
  int found=0;
  printf("enter the number for p: ");
  scanf("%d",&p);
  for(; i<n; i++){
    if(arr[i]==p){
      found=1;
      break;
    }
  }
  if (found) {
    printf("Yes\n");
  } else {
    printf("No\n");
    }
  return  0;

}


