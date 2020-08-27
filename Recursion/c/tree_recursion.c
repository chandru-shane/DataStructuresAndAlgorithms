// TIME COMPLEXITY : O(2^n)
// SPACE COMPLEXITY: O(n)


// Tree recursive function is having more than one recursive call


#include <stdio.h>

void func(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        func(n-1);
        func(n-1);
    }
}

int main()
{
    int x = 5;
    func(x);
    return 0;
}