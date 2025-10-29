#include <stdio.h>
int findPeak(int arr[], int n) 
{
    if (n == 0) return -1;
    if (n == 1 || arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
        return n - 1;
    for (int i = 1; i < n - 1; i++) 
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
    return -1;
}
int main() 
{
    int scores[] = {5, 10, 20, 15, 25, 18, 30, 28};
    int size = sizeof(scores) / sizeof(scores[0]);
    int peakIndex = findPeak(scores, size);
    if (peakIndex != -1)
        printf("Peak element is %d at index %d\n", scores[peakIndex], peakIndex);
    else
        printf("No peak element found.\n");
    return 0;
}