#include <stdio.h>
int main() 
{
    int scores[] = {88, 99, 76, 45, 100, 67, 32, 81}, even[20], odd[20];
    int e = 0, o = 0, n = sizeof(scores)/sizeof(scores[0]);
    for (int i = 0; i < n; i++)
        (scores[i] % 2 == 0) ? (even[e++] = scores[i]) : (odd[o++] = scores[i]);
    printf("Even: "); for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd: ");  for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    printf("\n");
    return 0;
}