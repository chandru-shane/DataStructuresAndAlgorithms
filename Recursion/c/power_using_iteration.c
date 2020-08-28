// TIME COMPLEXITY : O(n)
// SPACE COMPLEXITY: O(1)



#include <stdio.h>

int func(int m,int n)
{
    int i = 0;
    int result;
    result = 1;

    for(i=0; i<n;i++ )
    {
        result = result * m;
    }
    
    return result;
}


int main()
{
    int x;
    x = func(2,9);
    printf("%d\n", x);
    return 0;

}