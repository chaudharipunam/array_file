#include <stdio.h>
#include <string.h>

int romanToDecimal(char romanNumeral[]) {
    int decimalValue = 0;
    int previousValue = 0;

    for (int i = strlen(romanNumeral) - 1; i >= 0; i--) {
        int currentValue;

        switch (romanNumeral[i]) {
            case 'M':
                currentValue = 1000;
                break;
            case 'D':
                currentValue = 500;
                break;
            case 'C':
                currentValue = 100;
                break;
            case 'L':
                currentValue = 50;
                break;
            case 'X':
                currentValue = 10;
                break;
            case 'V':
                currentValue = 5;
                break;
            case 'I':
                currentValue = 1;
                break;
            default:
                return -1; // Invalid Roman numeral
        }

        if (currentValue < previousValue) {
            decimalValue -= currentValue;
        } else {
            decimalValue += currentValue;
        }

        previousValue = currentValue;
    }

    return decimalValue;
}

int main() {
    char romanNumeral[20];

    printf("Enter a Roman numeral: ");
    scanf("%s", romanNumeral);

    int result = romanToDecimal(romanNumeral);

    if (result != -1) {
        printf("Decimal equivalent: %d\n", result);
    } else {
        printf("Invalid Roman numeral.\n");
    }

    return 0;
}

