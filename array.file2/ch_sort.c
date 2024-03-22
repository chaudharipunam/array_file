/*

defbac   -   badc  =dbac

*/
#include <stdio.h>
int main(){
   char a[50];
   printf("1st array's char: ");
   scanf("%s",a);
   char a2[30];
   printf("2nd array's char: ");
   scanf("%s",a2);
   char a3[30];
   int p=0;
   for(int i=0; i<30; i++){
      a3[i]='\0';
   }
   for(int j=0; a[j]!='\0'; j++){
     for(int k=0; a2[k]!='\0'; k++){
         if(a[j]==a2[k]){
            a3[p]=a2[k];
            p++;
            for(int i=k; a2[i]!='\0'; i++){
              a2[i]=a2[i+1];
            }
            break;
         }
     }
   }
   for(int t=0; a2[t]!='\0'; t++){
     a3[p]=a2[t];
     p++;
   }
   for(int j=0; a3[j]!='\0'; j++){
      printf("%c\n",a3[j]);
   }
   return 0;
}



    
