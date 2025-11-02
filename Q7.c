#include <stdio.h>
int main() 
{
    int rows = 5;
    for (int i = 1; i <= rows; i++) 
    {
        int bit = 0;
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", bit);
            bit = 1 - bit; 
        }
        printf(" ");
        bit = 0;
        for (int j = 1; j <= i; j++) 
        {
            printf("%d", bit);
            bit = 1 - bit;
        }
        printf("\n");
    }
    return 0;
}