#include <stdio.h>
void func(int n){
    if (n > 0) {
        func(n-1);
        printf("%d ", n);
    }
}

int main(){
    int x = 5;
    func(x);
    return 0;
}