#include<stdio.h>
int main()
{		int arr[]={1,2,3,4,5,6,7};
     		for(int i=0;i<7;i++)
    	        {
    	        int sl=0,sr=0;
    	 	for(int j=0;j<i;j++){
     			if(j<i)
     			{
     			sl+=arr[j];
     			}
     			for(int j=i+1;j<7;j++)
     			{
     			sr+=arr[j];
     			}
     		   }
     		      if(sl==sr)
     		     {
     		        printf("Equilibrium  : %d", arr[i]);
     		     }
     		}
     	 return 0;
     	 }
