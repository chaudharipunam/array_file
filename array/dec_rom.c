#include <stdio.h>
void dec_Rom(int num){
    if(num<=0 || num>3999){
      printf("Invalid input. Please enter a number between 1 and 3999.\n");
    return;
    }
    char* romNum[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int dec[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int i=0;
    while (num>0){
      if(num>=dec[i]){
        printf("%s",romNum[i]);
        num-= dec[i];
      }
      else{
        i++;
      }
    }
    printf("\n");
}
int main(){
    int num2;
    printf("Enter a decimal number (1-3999): ");
    scanf("%d", &num2);
    dec_Rom(num2);
    return 0;
}

