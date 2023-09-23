#include <stdio.h>
int main()
{
   int n,max=-100,min=100;
   printf("enter the number: ");
   scanf("%d",&n);
   int f_arr[n],s_arr[n],hot_d=0,col_d=0;
   for(int i=0; i<n; i++){
     printf("%d day\n",i+1);
     printf("max temp: ");
     scanf("%d",&f_arr[i]);
     printf("min temp: ");
     scanf("%d",&s_arr[i]);
   }
   int s=0,sum=0;
   for(int j=0; j<n; j++){
     s+=f_arr[j];
     sum+=s_arr[j];
   }
   int ma_me=s/n;
   int mi_me=sum/n;
   printf("mean of max temp: %d\n mean of min temp: %d\n",ma_me,mi_me);
   for(int h=0; h<n; h++){
     if(f_arr[h]>max){
       max=f_arr[h];
       hot_d=h+1;
     }
     if(s_arr[h]<min){
       min=s_arr[h];
       col_d=h+1;
     }
   }
   printf("maximum temp: %d\n minimum temp: %d\n",max,min);
   printf("hottest day: %d coldest day: %d",hot_d,col_d);
   return 0;
}

