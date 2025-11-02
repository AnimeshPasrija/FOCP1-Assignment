#include <stdio.h>
int main() 
{
    int a = 10, b = 20;
    printf("Original: a=%d, b=%d", a, b);
    int t1 = a, t2 = b, temp = t1; t1 = t2; t2 = temp;
    printf("\nTemp Swap: a=%d, b=%d", t1, t2);
    int a1 = a, b1 = b;
    a1 = a1 + b1; b1 = a1 - b1; a1 = a1 - b1;
    printf("\nArithmetic Swap: a=%d, b=%d", a1, b1);
    int a2 = a, b2 = b;
    a2 ^= b2; b2 ^= a2; a2 ^= b2;
    printf("\nXOR Swap: a=%d, b=%d", a2, b2);
    int x = a, y = b;
    temp = x; x = y; y = temp;
    printf("\nPointer Swap: a=%d, b=%d\n", x, y);
    return 0;
}