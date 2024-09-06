#include <stdio.h>

int count(int a, int b)
{
    int count = 0;
    for(int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
            count++;
        else if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
            count++;
        else if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
            count++;
        else if (i / 10 != 0)
        {
            for(int j = i; j / 10 != 0;)
            {
                j = j / 10;
                if (j % 10 == 3 || j % 10 == 6 || j % 10 == 9)
                {
                    count++;
                    break;
                }
                else if (j / 10 == 3 || j / 10 == 6 || j / 10 == 9)
                {
                    count++;
                    break;
                }
            }
        }

    }
    return (count);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", count(a,b));
    return 0;
}