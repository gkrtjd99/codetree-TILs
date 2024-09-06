#include <stdio.h>

int count(int a, int b)
{
    int count = 1;
    for(int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
            count++;
        else if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
            count++;
        else if (i % 10 == 3 || 1 % 10 == 6 || i % 10 == 9)
            count++;
    }
    return (count);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", count(a,b));
    return 0;
}