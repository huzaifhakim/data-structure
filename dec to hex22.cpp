#include <stdio.h>

void decToHex(int n);

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Hexadecimal equivalent: ");
    decToHex(decimal);

    return 0;
}

void decToHex(int n) {
    if (n == 0)
        return;
    
    int remainder = n % 16;
    decToHex(n / 16);
    
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + remainder - 10);
}