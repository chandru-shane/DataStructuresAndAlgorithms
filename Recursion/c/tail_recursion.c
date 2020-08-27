// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY: O(n)


# include <stdio.h>

void func(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        func(n-1);
    }
}




int main()
{
    func(5);
    return 0;
}   