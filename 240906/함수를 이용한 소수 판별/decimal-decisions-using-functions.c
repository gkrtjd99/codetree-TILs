#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++)
    {
        if (i == 2)
            c = 2;
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