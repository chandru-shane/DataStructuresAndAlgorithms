
#include <stdio.h>

double e(int x, int n)
{
    static double s=1;
    for( ;n>0; n--)
    {
        s = 1 + x*s/n ;
    }
    return s;
}

int main()
{
    printf("%lf \n", e(1,10));
    return 0;
}