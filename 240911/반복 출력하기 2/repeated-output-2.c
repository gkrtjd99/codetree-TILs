#include <stdio.h>
int printstar(int n)
{
    if (n==0)
        return 0;
    printstar(n-1);
    printf("HelloWorld\n");
}
int main() {
    int n;
    scanf("%d", &n);
    printstar(n);
    return 0;
}