#include <stdio.h>
int hcf_recursive(int a, int b) 
{
    return (b == 0) ? a : hcf_recursive(b, a % b);
}
int hcf_iterative(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() 
{
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("HCF (Recursive): %d\n", hcf_recursive(x, y));
    printf("HCF (Iterative): %d\n", hcf_iterative(x, y));
    return 0;
}