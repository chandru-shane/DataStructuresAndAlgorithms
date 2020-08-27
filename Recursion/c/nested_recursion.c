// nested recursion function call will pass function call as argument

#include <stdio.h>

int func(int n)
{
    if(n > 100)
    {
        return n - 10;
    }
    return func(func(n+11));
}


int main()
{
    int x;
    x = func(98);
    printf("%d",x);
    return 0;
    
}