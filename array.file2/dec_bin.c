/*

#include <stdio.h>
int main() {
    int dec,remainder,bina=0,bitPosition=1;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    while(dec>0){
        remainder=dec%2;
        bina+=remainder*bitPosition;
        dec/=2;
        bitPosition*=10;
    }
    printf("Binary equivalent: %d\n", bina);
    return 0;
}
*/

#include <stdio.h>
int main()
{
   int n,r,i;
   printf("enter  decimal  no.: ");
   scanf("%d",&n);
   i=0;
   int bin[45];
   while(n>0){
     r=n%2;
     bin[i]=r;
     n/=2;
     i++;
   }
   printf("binary number: ");
   if(i==0){
     printf("0");
   }
   else{
     for(int j=i-1; j>=0; j--){
       printf("%d", bin[j]);
     }
   }
   return 0;
}

