#include <stdio.h>
int main() 
{
    int a[] = {5,10,20,15,25,18,30,28}, n = 8, i, p = -1;
    if (n == 1 || a[0] >= a[1]) p = 0;
    else if (a[n-1] >= a[n-2]) p = n - 1;
    else for (i = 1; i < n - 1; i++)
        if (a[i] >= a[i-1] && a[i] >= a[i+1]) { p = i; break; }
    if (p != -1) printf("Peak: %d at index %d\n", a[p], p);
    else printf("No peak found.\n");    
    return 0;
}