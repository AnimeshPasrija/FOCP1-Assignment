#include <stdio.h>
#include <math.h>
int binaryToDecimal(int binary) 
{
    int decimal = 0, base = 1;
    while (binary > 0) 
    {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}
void decimalToBinary(int decimal) 
{
    int binary[32], index = 0;

    if (decimal == 0) 
    {
        printf("Binary: 0\n");
        return;
    }
    while (decimal > 0) 
    {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) 
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main() 
{
    int choice;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        int binary;
        printf("Enter binary number (as integer): ");
        scanf("%d", &binary);
        int decimal = binaryToDecimal(binary);
        printf("Decimal: %d\n", decimal);
    } 
    else if (choice == 2) 
    {
        int decimal;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }
    return 0;
}