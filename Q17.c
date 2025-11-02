#include <stdio.h>
int main() 
{
    int arr[100] = {10, 20, 30, 40, 50}, size = 5, pos, choice;
    printf("Original: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n1.Front 2.Middle 3.End\nChoice: ");
    scanf("%d", &choice);
    pos = (choice == 1) ? 0 : (choice == 2) ? size / 2 : size - 1;
    for (int i = pos; i < size - 1; i++) arr[i] = arr[i + 1];
    size--;
    printf("After deletion: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    return 0;
}