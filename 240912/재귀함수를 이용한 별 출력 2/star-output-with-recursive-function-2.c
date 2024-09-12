#include <stdio.h>

int printstar(int n)
{
    if (n == 0)
        return 0;
    for(int i = 0; i < n; i++)
        printf("* ");
    printf("\n");
    printstar(n-1);
    for(int i = 0; i < n; i++)
        printf("* ");
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    printstar(n);
    return 0;
}