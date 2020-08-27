// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY: O(1)

#include <stdio.h>


void func(int n)
{
    while (n > 0)
    {
        printf("%d\n", n);
        n--;
    }
    
}

int main()
{
    func(5);
    return 0;
}