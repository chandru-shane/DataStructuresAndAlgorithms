#include <stdio.h>


// version 1
int power(int m, int n)
{
    if (n==0)
        return 1;
    return power(m, n-1) *m;

}

// optimized version 2

int power1(int m, int n){
    if(n==0)
        return 1;
    if(n%2 == 0)
        return power1(m*m, n/2);
    return m * power1(m*m, (n-1)/2);
}

int main()
{
 
    printf("%d this is from first function \n", power(2,9));
    printf("%d this is form second function \n", power1(2,9));
    return 0;
}