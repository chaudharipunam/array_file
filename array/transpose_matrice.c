/*
#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int p[n][n];
    for (int i=0; i<n; i++){
      for (int j=0; j<n; j++){
	scanf("%d",&p[i][j]);
      }
    }
    for (int i=0; i<n; i++){
      printf("\n");
      for (int j=0; j<n; j++){
	printf(" %d ",p[j][i]);
      }
    }
    return 0;
}


#include <stdio.h>
void rot_arr(int arr[], int n) {
    int temp = arr[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = temp; 
}
int main() {
    int n;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    rot_arr(arr, n);
    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


//.........matrice array create...
#include <stdio.h>
int main()
{
   int n,m;
   printf("rows is: ");
   scanf("%d",&n);
   printf("column is : ");
   scanf("%d",&m);
   int arr[n][m];
   for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
       scanf("%d",&arr[i][j]);
     }
     printf("\n");
   }
   for(int k=0; k<n; k++){
     for(int p=0; p<m; p++){
       printf("%d",arr[k][p]);
     }
     printf("\n");
   }
   return 0;
}


#include <stdio.h>
int main()
{
   int n,m;
   printf("rows is: ");
   scanf("%d",&n);
   printf("column is : ");
   scanf("%d",&m);
   int arr[n][m];
   for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
       scanf("%d",&arr[i][j]);
     }
     printf("\n");
   }
   for(int k=0; k<n; k++){
     for(int p=0; p<m; p++){
       printf("%d",arr[k][p]);
     }
     printf("\n");
   }
   int arr_t[m][n];
   for(int r=0; r<m; r++){
     for(int u=0; u<n; u++){
       arr_t[u][r]=arr[r][u];
     }
     printf("\n");
   }
   for(int l=0; l<n; l++){
     for(int g=0; g<m; g++){
       printf("%d",arr_t[l][g]);
     }
     printf("\n");
   }
   return 0;
}
*/

#include <stdio.h>
int main()
{
   int n,m;
   printf("rows is: ");
   scanf("%d",&m);
   printf("columns is: ");
   scanf("%d",&n);
   int arr[m][n];
   for(int i=0; i<m; i++){
     for(int j=0; j<n; j++){
       scanf("%d",&arr[i][j]);
     }
     printf("\n");
   }
   for(int k=0; k<n; k++){
     for(int s=0; s<m; s++){
       printf("%d",arr[s][k]);
     }
     printf("\n");
   }
}
