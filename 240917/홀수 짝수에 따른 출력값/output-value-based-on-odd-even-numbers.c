#include <stdio.h>

int abc(int n)
{
    if (n <= 2)
        return n;
    return abc(n-2) + n;
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d",abc(n));
    return 0;
}