#include <stdio.h>
int main() 
{
    int scores[] = {88, 99, 76, 45, 100, 67, 32, 81};
    int size = sizeof(scores) / sizeof(scores[0]);
    int even_array[20], odd_array[20];
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < size; i++) 
    {
        if (scores[i] % 2 == 0) 
        {
            even_array[even_count++] = scores[i];
        } else {
            odd_array[odd_count++] = scores[i];
        }
    }
    printf("Even scores: ");
    for (int i = 0; i < even_count; i++) 
    {
        printf("%d ", even_array[i]);
    }
    printf("\nOdd scores: ");
    for (int i = 0; i < odd_count; i++) 
    {
        printf("%d ", odd_array[i]);
    }
    printf("\n");
    return 0;
}