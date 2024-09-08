#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a;
    for (int i = 1; i < b; i++)
    {
        c *= a;
    }
    printf("%d", c);
    return 0;
}