#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            else if (i - 1 == j)
                c += i;
        }
    }
    printf("%d", c);
    return 0;
}