// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY: O(n)

#include <stdio.h>

int sum(int n)
{
    if (n==0)
        return 0;
    return sum(n-1) + n;
}

int main()
{
    int x;
    x = sum(10);
    printf("%d\n", x);
    return 0;
}