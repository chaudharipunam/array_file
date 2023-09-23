#include <stdio.h>
int main()
{
  int n,i,q;
  printf("enter the number: ");
  scanf("%d",&n);
  int arr[n];
  for(i=0; i<n; i++){
    scanf("%d",&q);
    arr[i]=q;
  }
  int j,Es=0,Os=0;
  for(j=0; j<n;j++){
    if(j%2==0){
      Es+=arr[j];
    }
    else {
      Os+=arr[j];
    }
  }
  printf("odd position sum %d\neven position sum  %d",Es,Os);
  return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

