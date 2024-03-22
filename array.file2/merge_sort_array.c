#include <stdio.h> 
int main()
{
	int first_arr[5]={5,9,20,21,43};
	int sec_arr[4]={400,71,82,27};
	int m=5,n=4;
	int a=m+n;
	int emarr[a],i=0;
	for(int a1=0; a1<m; a1++){
	  emarr[i]=first_arr[a1];
	  i++;
	}
	for(int a2=0; a2<n; a2++){
	  emarr[i]=sec_arr[a2];
	  i++;
	}
	for(int p=0; p<a-1; p++){
	  for(int k=0; k<a-p-1; k++){
	    if(emarr[k]>emarr[k+1]){
	      int temp=emarr[k];
	      emarr[k]=emarr[k+1];
	      emarr[k+1]=temp;
	    }
	  }
	}
	for(int j=0; j<a; j++){
	  printf(" %d",emarr[j]);
	}
	return 0;
}

