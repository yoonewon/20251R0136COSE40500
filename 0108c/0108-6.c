#include <stdio.h>
#define MAX 15

int fibonacci(int n);

int main() {
    int i;
    printf("Fibonacci Sequence\n");
    for(i=0; i<MAX; ++i)
        printf("%d\n", fibonacci(i));
    return 0;
}

int fibonacci(int n) {
    if(n==0 || n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}