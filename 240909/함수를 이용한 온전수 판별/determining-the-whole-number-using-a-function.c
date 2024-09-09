#include <stdio.h>

int main() {
    int a, b, count = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if(1 & i && i % 10 != 5 && (i % 3 != 0 || i % 9 == 0))
            count++;
    }
    printf("%d", count);
    return 0;
}