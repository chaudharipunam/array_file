//asending order .....


#include <stdio.h>
int main()
{
     int arr[6]={20,19,6,5,8,29};
     int n=6;
     for(int i=0; i<n-1; i++){
       int min=i;
       for(int j=i+1; j<n; j++){
         if(arr[j]<arr[min]){
           min=j;
         }
       }
       int temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
     }
     for(int k=0; k<n; k++){
       printf(" %d",arr[k]);
     }
     return 0;
}
 /*
//asending order..........  
#include <stdio.h>
int main() {
    int i, j, temp, min;
    int a[5] = {4, 9, 2, 6, 3};

    for (i = 0; i < 5; i++) {
        min = a[i];
        int minIndex = i;

        for (j = i + 1; j < 5; j++) {
            if (a[j] < min) {
                min = a[j];
                minIndex = j;
            }
        }

        if (minIndex != i) {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    for (j = 0; j < 5; j++) {
        printf("%d ", a[j]);
    }

    return 0;
}



//desending order......

#include <stdio.h>
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    for(int j=0; j<n-1; j++){
      int min=j;
      for(int k=j+1; k<n; k++){
        if(arr[k]>arr[min]){
          min=k;
        }
      }
      int temp=arr[j];
      arr[j]=arr[min];
      arr[min]=temp;
    }
    for(int m=0; m<n; m++){
      printf(" %d",arr[m]);
    }
    return 0;
}
   */ 

