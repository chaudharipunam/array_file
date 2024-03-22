/*

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

*/


#include <stdio.h>
int main(void) {
	int t,n;
	scanf("%d",&t);
	    scanf("%d",&n);
	    int arr[t];
	    for(; n<t; n++){
	        for(int j=0; j<t-n-1; j++){
	            if(arr[j]>arr[j+1]){
	                int temp=arr[j];
	                arr[j]=arr[j+1];
	                arr[j+1]=arr[j];
	            }
	        }
	        for(int k=0; k<n; k++){
	            printf("%d\n",arr[k]);
	        }
	    }
	return 0;
}

