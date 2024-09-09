#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int count = 0;
    for(int i = a; i <= b; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
            else if (j + 1 == i)
            {
                if ((i % 10 + i / 10) % 2 == 0)
                    count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}