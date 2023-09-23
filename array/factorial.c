#include  <stdio.h>
int main()
{
  int n,i,mul=1,r=0;
  scanf("%d",&n);
  int arr[n];
  for(i=1; i<=n; i++){
    mul*=i;
    arr[r]=mul;
    r++;
  }
  for(int p=0; p<n; p++){
    printf("%d ",arr[p]);
  }
  return 0;
}

