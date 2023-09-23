#include <stdio.h>
int main()
{
  int n,index=0;
  printf("enter the number: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=1; i<=n; i++){
     if(n%i==0){
       arr[index]=i;
       index++;
     }
  } 
  for(int j=0; j<index; j++){
    printf("%d ",arr[j]);
  }
  printf("\n");
  return 0;
}
  
   
 
