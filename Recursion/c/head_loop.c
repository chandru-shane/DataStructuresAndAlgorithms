// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY: O(2)

#include <stdio.h>


void func(int n)
{
    int i = 1;
    while(i <= n)
    {
        printf("%d\n",i);
        i++;
    }
}


int main()
{
    int x = 5;
    func(5);
    return 0;
}