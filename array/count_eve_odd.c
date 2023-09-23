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
  int j,Ec=0,Oc=0;
  for(j=0; j<n; j++){
    if(arr[j]%2==0){
      Ec++;
    }
    else {
      Oc++;
    }
  }
  printf("even count %d, odd count %d ",Ec,Oc);
  return 0;
}
