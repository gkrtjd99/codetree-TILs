#include <stdio.h>
int printhi(int n)
{
    if (n==0)
        return 0;
    printhi(n-1);
    printf("HelloWorld\n");
}
int main() {
    int n;
    scanf("%d", &n);
    printhi(n);
    return 0;
}