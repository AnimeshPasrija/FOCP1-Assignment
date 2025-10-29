#include <stdio.h>
int main() 
{
    int scores[] = {88, 99, 76, 45, 100, 67, 32, 81};
    int size = sizeof(scores) / sizeof(scores[0]);
    int max = scores[0];
    int min = scores[0];
    for (int i = 1; i < size; i++) 
    {
        if (scores[i] > max)
            max = scores[i];
        if (scores[i] < min)
            min = scores[i];
    }
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    return 0;
}