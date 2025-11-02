#include <stdio.h>
int main() 
{
    int choice, n;
    printf("1.Binary->Decimal  2.Decimal->Binary\nChoice: ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        printf("Enter binary: ");
        scanf("%d", &n);
        int d = 0, b = 1;
        while (n) { d += (n % 10) * b; b *= 2; n /= 10; }
        printf("Decimal: %d\n", d);
    } 
    else if (choice == 2) 
    {
        printf("Enter decimal: ");
        scanf("%d", &n);
        int bin[32], i = 0;
        if (n == 0) printf("Binary: 0\n");
        else 
        {
            while (n) { bin[i++] = n % 2; n /= 2; }
            printf("Binary: ");
            while (i--) printf("%d", bin[i]);
            printf("\n");
        }
    } 
    else printf("Invalid choice.\n");
    return 0;
}