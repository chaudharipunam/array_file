#include <stdio.h>
int main() {
    int bina,dec=0,bitPosition=0,remainder;
    printf("Enter a binary number: ");
    scanf("%d", &bina);
    while (bina>0){
        remainder=bina%10;
        dec+=remainder*(1<<bitPosition);
        bina/=10;
        bitPosition++;
    }
    printf("Decimal equivalent: %d\n", dec);
    return 0;
}

