#include <stdio.h>

int main() {
    int m, d;
    int flag = 0;
    scanf("%d %d", &m, &d);

    if(1 <= m && m <= 7)
    {
        if (m == 2)
        {
            if (d >= 1 && d <= 28)
                flag = 1;
        }
        else if (m % 2 == 0)
        {
            if (d >= 1 && d <= 30)
                flag = 1;
        }
        else if (m % 2 != 0)
        {
            if (d >= 1 && d <= 31)
                flag = 1;
        }
    }
    else if (8 <= m && 12 >= m)
    {
        if (m % 2 != 0)
        {
            if (d >= 1 && d <= 30)
                flag = 1;
        }
        else if (m % 2 == 0)
        {
            if (d >= 1 && d <= 31)
                flag = 1;
        }
    }
    if (flag)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}