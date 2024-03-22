#include <stdio.h>
#include <string.h>
int main()
{
   int n;
   char name[n][100];
   printf("enter the number: ");
   scanf("%d",&n);
   for(int i=0; i<n; i++){
     printf("name is %d: ", i+1);
     scanf("%c",&name); 
     name[i];
   }
   for(int j=0; j<n; j++){
     printf("%s",name[j]);
   }
   return 0;
}
