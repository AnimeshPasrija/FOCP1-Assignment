#include <stdio.h>
int main() 
{
    int arr[100] = {10,20,30,40,50}, size = 5, ele, pos, ch;
    printf("Original: "); for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n1.Front 2.Middle 3.End\nChoice: ");
    scanf("%d", &ch);
    printf("Enter element: ");
    scanf("%d", &ele);
    pos = (ch == 1) ? 0 : (ch == 2) ? size / 2 : (ch == 3) ? size : -1;
    if (pos == -1 || size >= 100) return printf("Invalid.\n"), 1;
    for (int i = size; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = ele; size++;
    printf("After insertion: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    return 0;
}