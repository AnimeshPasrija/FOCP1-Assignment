#include <stdio.h>
int main() 
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements: ",n);
    for (i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    if (n>1)
    {
        int l=arr[n-1];
        for (i=n-1;i>=1;i--) 
        {
            arr[i]=arr[i-1];
        }
        arr[0]=l;
    }
    printf("rotated array: ");
    for (i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}