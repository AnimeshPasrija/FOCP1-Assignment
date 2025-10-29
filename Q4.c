#include <stdio.h>
void swap_temp(int a, int b) 
{
    printf("\n[Method 1: Temporary Variable]");
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter swap: a = %d, b = %d", a, b);
}
void swap_arithmetic(int a, int b) 
{
    printf("\n\n[Method 2: Arithmetic]");
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swap: a = %d, b = %d", a, b);
}
void swap_xor(int a, int b) 
{
    printf("\n\n[Method 3: Bitwise XOR]");
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swap: a = %d, b = %d", a, b);
}
void swap_pointers(int *a, int *b) 
{
    printf("\n\n[Method 4: Pointers]");
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nAfter swap: a = %d, b = %d", *a, *b);
}

int main() 
{
    int a = 10, b = 20;

    printf("Original values: a = %d, b = %d", a, b);

    swap_temp(a, b);
    swap_arithmetic(a, b);
    swap_xor(a, b);
    int x = 10, y = 20;
    swap_pointers(&x, &y);
    return 0;
}
