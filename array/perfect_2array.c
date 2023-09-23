#include <stdio.h>
int main()
{
  int n,m=0;
  printf("enter the number: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    int sum=0;
    for(int j=1; j<i; j++){
      if(i%j==0){
        sum=sum+j;
      }
    }
    if(sum==i){
      arr[m]=i;
      m++;
    }
  }
  for(int p=0; p<m; p++){
     printf("%d\n",arr[p]);
  }
  return 0;
}
    
