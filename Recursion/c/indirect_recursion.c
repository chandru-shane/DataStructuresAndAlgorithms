// Indirect recursion is call one from another one

#include <stdio.h>

void funcB(int n);


void funcA(int n)
{
    if (n > 0)
    {
        printf("%d\n",n);
        funcB(n-1);
    }
}

void funcB(int n)
{
    if(n > 1)
    {
        printf("%d\n",n);
        funcA(n/2);
    }
}

int main()
{
    int x = 25;
    funcA(x);
    return 0;
}