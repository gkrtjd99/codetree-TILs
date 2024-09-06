#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d", &a, &b);

    for(int i = 1; i < a; i++)
    {
        if (a % i == 0 && b % i == 0)
            c = i;
    }
    int i = (a*b) / c;
    printf("%d", i);
    return 0;
}