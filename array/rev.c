/*

//........create array & print odd num........

#include <stdio.h>
int main()
{
   int n,k=0,l;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n],em_arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&l);
     arr[i]=l;
   }
   for(int j=0; j<n; j++){
     if(arr[j]%2!=0){
       em_arr[k]=arr[j];
       k++;
     }
   }
   for(int s=0; s<k; s++){
     printf(" %d",em_arr[s]);
   }
   return 0;
}
//...........1 to 20............

#include <stdio.h>
int main()
{
   int n;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     arr[i]=i+1;
   }
   for(int s=0; s<n; s++){
     printf(" %d\n",arr[s]);
   }
   return 0;
}


//......reverse.........

#include <stdio.h>
int main()
{
   int n,k,p;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n],arr2[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   for(int j=n-1; j>=0; j--){
     arr2[p]=arr[j];
     p++;
   }
   for(int s=0; s<n; s++){
     printf(" %d\n",arr2[s]);
   }
   return 0;
}

//...........occurence.............
#include <stdio.h>
int main()
{
   int n,k,p,t;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   printf("num is: ");
   scanf("%d",&t);
   int c=0;
   for(int j=0; j<n; j++){
     if(t==arr[j]){
       c++;
     }
   }
   printf(" total occurence of %d this num is %d",t,c);
   return 0;
}


//........count even & odd.....
#include <stdio.h>
int main()
{
   int n,k,p,t;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   int ec=0,oc=0;
   for(int j=0; j<n; j++){
     if(arr[j]%2==0){
       ec++;
     }
     else{
       oc++;
     }
   }
   printf(" ec is %d and oc is %d",ec,oc);
   return 0;
}

/*
//............even or odd.............
#include <stdio.h>
int main()
{
   int n,p=1;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     arr[i]=p;
     p+=2;
   }
   for(int j=0; j<n; j++){
     printf(" %d",arr[j]);
   }
   return 0;
}



//............prime up to N............
#include <stdio.h>
int main()
{
   int n,s=0;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int j=1; j<=n; j++){
     int c=0;
     for(int i=1; i<=j; i++){
       if(j%i==0){
         c++;
       }
     }
     if(c==2){
       arr[s]=j;
       s++;
     }
   }
   for(int k=0; k<s; k++){
     printf(" %d",arr[k]);
   }
   
   return 0;
}


//.........perfect no up to N..........
#include <stdio.h>
int main()
{
   int n,s=0;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int j=1; j<=n; j++){
     int sum=0;
     for(int i=1; i<j; i++){
       if(j%i==0){
         sum+=i;
       }
     }
     if(sum==j){
       arr[s]=j;
       s++;
     }
   }
   for(int k=0; k<s; k++){
     printf(" %d",arr[k]);
   }
   return 0;
}


//......count of positive & negative number......
#include <stdio.h>
int main()
{
   int n,k,p,t;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   int pc=0,nc=0;
   for(int j=0; j<n; j++){
     if(arr[j]>0){
       pc++;
     }
     else if(arr[j]<0){
       nc++;
     }
   }
   printf(" pc is %d and nc is %d",pc,nc);
   return 0;
}


//..........max in N number...........
#include <stdio.h>
int main()
{
   int n,k,p,t;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   int max;
   for(int j=0; j<n; j++){
     if(arr[j]>max){
       max=arr[j];
     }
   }
   printf("maximum number is %d",max);
   return 0;
}


//.....store up to n & reverse it & then print them......
#include <stdio.h>
int main()
{
   int n,p,q=1;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n],arr2[n];
   for(int i=0; i<n; i++){
     arr[i]=i+1;
   }
   for(int j=n-1; j>=0; j--){
     arr2[p]=arr[j];
     p++;
   }
   for(int k=0; k<n; k++){
     printf(" %d\n",arr2[k]);
   }
   return 0;
}

//......mean - mode - meadian.......
#include <stdio.h>
int main()
{
   int n,k,median,p;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&k);
     arr[i]=k;
   }
   int sum=0;
   for(int m=0; m<n; m++){
     sum+=arr[m];
   }
   int mean=sum/n;
   printf("%d is mean\n",mean);
   int maxc=0,mode=-1;
   for(int s=0; s<n; s++){
     int c=0;
     for(int j=0; j<n; j++){
       if(arr[s]==arr[j]){
         c++;
       }
     }
     if(c>maxc){
       maxc=c;
       mode=arr[s];
     }
   }
   printf("%d is mode\n",p);
   for(int k=0; k<n; k++){
     for(int d=k+1; d<n; d++){
       if(arr[k]>arr[d]){
         int temp=arr[k];
         arr[k]=arr[d];
         arr[d]=temp;
       }
     }
   }
   if(n%2){
     median=(arr[n/2-1]+arr[n/2])/2;
     printf("%d is the median\n", median);
   }
   else{
     median=arr[n/2];
     printf("%d is the median\n", median);
   }
   
   return 0;
}

  
/*
//......... merge two array........
#include <stdio.h>
int main()
{
   int n,p;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int f_arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&f_arr[i]);
   }
   printf("enter the value of m: ");
   scanf("%d",&p);
   int s_arr[p];
   for(int j=0; j<p; j++){
     scanf("%d",&s_arr[j]);
   }
   int a=n+p;
   int em_arr[a],d=0;
   for(int g=0; g<n; g++){
     em_arr[d]=f_arr[g];
     d++;
   }
   for(int h=0; h<p; h++){
     em_arr[d]=s_arr[h];
     d++;
   }
   for(int u=0; u<a; u++){
     printf(" %d",em_arr[u]);
   }
   return 0;
}

//.......merge two array......
#include <stdio.h>
int main()
{
   int n,p;
   printf("enter the value of n: ");
   scanf("%d",&n);
   int f_arr[n];
   for(int i=0; i<n; i++){
     scanf("%d",&f_arr[i]);
   }
   printf("enter the value of m: ");
   scanf("%d",&p);
   int s_arr[p];
   for(int j=0; j<p; j++){
     scanf("%d",&s_arr[j]);
   }
   int a=n+p;
   int em_arr[a],d=0;
   for(int g=0; g<n; g++){
     em_arr[d]=f_arr[g];
     d++;
   }
   for(int h=0; h<p; h++){
     em_arr[d]=s_arr[h];
     d++;
   }
   for(int u=0; u<a; u++){
     printf(" %d",em_arr[u]);
   }
   return 0;
}


//......bubble sort.....
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
    for(int j=0; j<n; j++){
      for(int k=0; k<n-j-1; k++){
        if(arr[k]>arr[k+1]){
          int temp=arr[k];
          arr[k]=arr[k+1];
          arr[k+1]=temp;
        }
      }
    }
    for(int m=0; m<n; m++){
      printf(" %d",arr[m]);
    }
    return 0;
}
    


//......selection sort........
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
    

//.......insertion sort.......
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
    for(int j=0; j<n; j++){
      for(int k=0; k<n-1; k++){
        if(arr[k+1]<arr[k]){
          int temp=arr[k];
          arr[k]=arr[k+1];
          arr[k+1]=temp;
        }
      }
    }
    for(int m=0; m<n; m++){
      printf(" %d",arr[m]);
    }
    return 0;
}    
    
*/


#include <stdio.h>
int main()
{
     int n,median; 
     printf("enter the num for first arr: ");
     scanf("%d",&n);
     int arr[n];
     for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
     }
     for(int f=0; f<n; f++){
       for(int h=f+1; h<n-f; h++){
         if(arr[h]>arr[h+1]){
           int temp=arr[h];
           arr[h]=arr[h+1];
           arr[h+1]=temp;
         }
       }
     }
     if(n%2==0){
       median=(arr[n/2-1]+arr[n/2])/2;
       printf(" mid is : %d",median);
     }
     else{
       median=arr[n/2];
       printf("mid is: %d",median);
       int m,s=0;
       printf("\nenter the num for sec arr: ");
       scanf("%d",&m);
       int s_arr[m];
       for(int j=0; j<m; j++){
         scanf("%d",&s_arr[j]);
       }
       if(m%2==0){
         median=(arr[m/2-1]+arr[m/2])/2;
         printf("mid is: %d",median);
       }
       else{
         median=arr[m/2];
         printf("mid is: %d",median);
       }
     }
     return 0;
}   
 /*
 //.....matrices substraction........
#include <stdio.h>
int main()  
{
    int n,m;
    printf("enter the num: ");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    int crr[n];
    for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++){
      scanf("%d",&brr[j]);
    }
    for(int k=0; k<n; k++){
      crr[m]=arr[k]-brr[k];
      m++;
    }
    for(int p=0; p<n; p++){
      printf(" %d",crr[p]); 
    }
    return 0;
}  
    

//....matrices multiplication........
#include <stdio.h>
int main()
{
   int n,m;
   printf("enter the num: ");
   scanf("%d",&n);
   int arr[n];
   int brr[n];
   int crr[n];
   for(int i=0; i<n; i++){
      scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++){
      scanf("%d",&brr[j]);
    }
    for(int k=0; k<n; k++){
      crr[m]=arr[k]*brr[k];
      m++;
    }
    for(int p=0; p<n; p++){
      printf(" %d",crr[p]); 
    }
    return 0;
}
    
*/
    
