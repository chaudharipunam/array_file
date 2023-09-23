#include  <stdio.h>
int main(){
	int arr[6]={50,34,1,56,98,2};
	int n=6;
	for(int i=0; i<n; i++){
	  for(int j=0; j<n-i-1; j++){
	    if(arr[j]>arr[j+1]){
	      int temp=arr[j];
	      arr[j]=arr[j+1];
	      arr[j+1]=temp;
	    }
	  }
	}
	for(int k=0; k<n; k++){
	   printf(" %d",arr[k]);
	}
	return 0;
}


