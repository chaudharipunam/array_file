#include <stdio.h>
int main()
{
  int i,n,m=0;
  scanf("%d",&n);
  int arr[n];
  for(i=1; i<=n; i++){
    int count=0;
    for(int j=1; j<=i; j++){
      if(i%j==0){
        count++;
      }
    }
    if(count==2){
      arr[m]=i;
      m++;
    }
  }
  for(int j=0; j< m; j++){
    printf("%d ",arr[j]);
  }
  
  return 0;
}
