//direct array....with Temp..bubble


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
/*

//create array...without Temp.....bubble
#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
        int arr[t];
	for(int i=0; i<t; i++){
	   scanf("%d", &arr[i]);
	}
	for(int s=0; s<t-1; s++){
	   for(int j=0; j<t-s-1; j++){
	      if(arr[j]>arr[j+1]){
	         arr[j]=arr[j]+arr[j+1];
	         arr[j+1]=arr[j]-arr[j+1];
	         arr[j]=arr[j]-arr[j+1];
              }
	   }
	}
        for(int k=0; k<t; k++){
	   printf("%d ",arr[k]);
        }
	return 0;
}
   



//bubble sort..........
#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0; i<n; i++){
     scanf("%d",&a[i]);
   }
   for(int i=0; i<n; i++){
     for(int j=0; j<n-i-1; j++){
       if(a[j]>a[j+1]){
         int t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
       }
     }
   }
   for(int k=0; k<n; k++){
     printf("%d\n",a[k]);
   }
   return 0;
}

*/
