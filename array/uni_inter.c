/*
#include <stdio.h>
int main()
{
  int f_arr[6]={5,9,2,3,6,2};
  int s_arr[5]={4,2,9,6,7};
  int n=6,m=5,a,un_size=0;
  a=n+m;
  int arr_un[a],arr_in[n<m?n:m],in_size=0;
  for(int a1=0; a1<n; a1++){
    int c=0;
    for(int a2=0; a2<m; a2++){
      if(f_arr[a1]==s_arr[a2]){
        c++;
        if(c>1){
          arr_in[in_size++]=f_arr[a1];
        }
        else{
          arr_un[i]=f_arr[a1];
        }
      }
      else{
        arr_un[i]=f_arr[a1];
        i++;
      }
      i++;
      a1++;
      r++;
    }
  }
  int u=arr_un[i];
  for(int j=0; j<a; j++){
    printf("%d",arr_in[j]);
  }
  for(int k=0; k<u; k++){
    printf("%d",arr_un[k]);
  }
  return 0;
}
*/

#include <stdio.h>
int main() {
    int f_arr[6] = {5, 9, 2, 3, 6, 2};
    int s_arr[5] = {4, 2, 9, 6, 7};
    int n = 6, m = 5;
    int a = n + m;
    int arr_un[a],arr_in[n < m ? n : m];
    int in_size = 0, un_size = 0;
    // Finding the intersection
    for (int a1 = 0; a1 < n; a1++) {
        for (int a2 = 0; a2 < m; a2++) {
            if (f_arr[a1] == s_arr[a2]) {
                int isDuplicate = 0;

                // Check for duplicates in the intersection array
                for (int j = 0; j < in_size; j++) {
                    if (arr_in[j] == f_arr[a1]) {
                        isDuplicate = 1;
                        break;
                    }
                }

                if (!isDuplicate) {
                    arr_in[in_size++] = f_arr[a1]; // Add unique elements to the intersection array
                }

                break; // Exit the inner loop when a match is found
            }
        }
    }

    // Finding the union
    for (int a1 = 0; a1 < n; a1++) {
        int isDuplicate = 0;

        // Check for duplicates in the union array
        for (int j = 0; j < un_size; j++) {
            if (arr_un[j] == f_arr[a1]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            arr_un[un_size++] = f_arr[a1]; // Add unique elements to the union array
        }
    }

    // Add elements from the second array (s_arr) to the union array (arr_un)
    for (int a2 = 0; a2 < m; a2++) {
        int isDuplicate = 0;

        // Check for duplicates in the union array
        for (int j = 0; j < un_size; j++) {
            if (arr_un[j] == s_arr[a2]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            arr_un[un_size++] = s_arr[a2]; // Add unique elements to the union array
        }
    }

    // Print the intersection
    printf("Intersection: ");
    for (int j = 0; j < in_size; j++) {
        printf("%d ", arr_in[j]);
    }
    printf("\n");

    // Print the union
    printf("Union: ");
    for (int k = 0; k < un_size; k++) {
        printf("%d ", arr_un[k]);
    }
    printf("\n");

    return 0;
}


/*
#include <stdio.h>
int main()
{
   int n,m;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&arr[i]);
   }
   printf("enter the value of m: ");
   scanf("%d",&m);
   int s_arr[m];
   for(int j=0; j<m; j++){
     scanf("%d",&s_arr[j]);
   }
   int a=n+m,k=0;
   int em_arr[a];
   for(int s=0; s<a; s++){
     int c=0;
     for(int p=0; p<m; p++){
       if(arr[s]==s_arr[p]){
         printf("%d\n",arr[s]);
         s_arr[p]=0;
       }
       else{
         em_arr[k]=s_arr[p];
         k++;
       }
     }
   }
   for(int h=0; h<a; h++){
     printf("%d",em_arr[h]);
   }
   return 0;
}
*/
