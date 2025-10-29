#include <stdio.h>
    int add(int x, int y)
    {
        for(;y!= 0;)
        {
            int carry = x & y;
            x = x^y;
            y = carry << 1;
        }
        return x;
    }
    int subtract(int a,int b)
    {
        return  add(a, add(~b, 1));
    }
    int main()
    {
        int a = 15;
        int b = 7;
        printf("Result of %d - %d = %d\n" , a ,b, subtract (a,b));
        return 0;
    }