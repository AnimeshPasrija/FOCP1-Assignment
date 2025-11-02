#include <stdio.h>
int main() 
{
    int a[] = {3,4,7,10,13,17,20,23,25}, n = 9, c = 0;
    printf("Primes: ");
    for (int i = 0; i < n; i++) 
    {
        int p = 1;
        if (a[i] < 2) p = 0;
        for (int j = 2; j * j <= a[i]; j++)
            if (a[i] % j == 0) { p = 0; break; }
        if (p) { printf("%d ", a[i]); c++; }
    }
    printf("\nTotal primes: %d\n", c);
    return 0;
}