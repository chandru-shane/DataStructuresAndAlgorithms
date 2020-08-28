// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY: O(n)

#include <stdio.h>


int fact(int n)
{
    if(n == 0)
        return 1;
    return fact(n-1) * n;
}


int main()
{
    int x;
    x = fact(5);
    printf("%d\n", x);
    return 0;
}