#include <stdio.h>
int main() 
{
    int x, y;
    printf("Enter (x y): ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) printf("Quadrant I\n");
    else if (x < 0 && y > 0) printf("Quadrant II\n");
    else if (x < 0 && y < 0) printf("Quadrant III\n");
    else if (x > 0 && y < 0) printf("Quadrant IV\n");
    else if (x == 0 && y == 0) printf("Origin\n");
    else if (x == 0) printf("Y-axis\n");
    else printf("X-axis\n");
    return 0;
}