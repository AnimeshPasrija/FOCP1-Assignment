#include <stdio.h>
int main() 
{
    int a[] = {2,10,10,100,2,10,11,2,11,2}, n = 10;
    int dup[100] = {0}, found = 0;
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (a[i] == a[j]) count++;
        if (count > 1 && !dup[a[i]]) 
        {
            printf("%d ", a[i]);
            dup[a[i]] = 1;
            found = 1;
        }
    }
    if (!found) printf("-1\n");
    return 0;
}