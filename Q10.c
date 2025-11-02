#include <stdio.h>
int main() 
{
    char *names[] = {"Anu", "Ravi", "Meena", "Karan", "Tina", "Ali", "Neha"};
    int marks[] = {88,99,76,99,45,99,67};
    int size = sizeof(marks) / sizeof(marks[0]);
    int count = 0;
    printf("Students who scored 99:\n");
    for (int i = 0; i < size; i++) 
    {
        if (marks[i] == 99) 
        {
            printf(" - %s\n", names[i]);
            count++;
        }
    }
    printf("Total number of students who scored 99: %d\n", count);
    return 0;
}