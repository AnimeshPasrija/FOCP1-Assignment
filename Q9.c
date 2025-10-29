#include <stdio.h>
int main() 
{
    int scores[] = {45, 67, 99, 23, 99, 88, 99};
    int size = sizeof(scores) / sizeof(scores[0]);
    int target = 99;
    int found = -1;
    for (int i = 0; i < size; i++) 
    {
        if (scores[i] == target) 
        {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("First occurrence of score %d is at index %d.\n", target, found);
    else
        printf("Score %d not found in the array.\n", target);
    return 0;
}