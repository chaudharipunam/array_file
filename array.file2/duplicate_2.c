#include <stdio.h>
int main()
{
  int arr[10]={1,2,5,4,2,6,5,1,2,1};
  int emarr[10]={0};
  for(int i=0; i<10; i++){
    if(emarr[i]==1){
      continue;
    }
    int count=1;
    for(int j=i+1; j<10; j++){
      if(arr[j]==arr[i]){
        count++;
        emarr[j]=1;
      }
    } 
    if (count>1){
      printf("duplicate num is: %d and it's count %d \n",arr[i],count);
    }
  }  
  return 0;
}

