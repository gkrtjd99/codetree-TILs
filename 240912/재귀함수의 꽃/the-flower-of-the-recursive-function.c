#include <stdio.h>

int print_n(int n)
{
    if(n == 0)
        return 0;
    printf("%d ", n);
    print_n(n-1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_n(n);
    return 0;
}