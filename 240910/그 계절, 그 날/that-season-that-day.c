#include <stdio.h>

int main() {
    int y, m, d;
    int flag = 0;
    scanf("%d %d %d", &y,&m,&d);

    if (m == 2)
    {
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        {
            if (d >= 1 && d <= 29)
                flag = 1;
        }
        else
        {
            if (d >= 1 && d <= 28)
                flag = 1;
        }
    }
    else if ((m >= 1 && m <= 7 && m % 2 == 0) || (m >= 8 && m <= 12 && m % 2 != 0))
    {
        if (d >= 1 && d <= 30)
            flag = 1;
    }
    else if ((m >= 1 && m <= 7 && m % 2 != 0) || (m >= 8 && m <= 12 && m % 2 == 0))
    {
        if (d >= 1 && d <= 31)
            flag = 1;
    }
    if(flag)
    {
        if(m >= 3 && m <= 5)
            printf("Spring");
        else if (m >= 6 && m <=8)
            printf("Summer");
        else if (m >= 9 && m <= 11)
            printf("Fall");
        else if (m == 1 || m == 2 || m == 12)
            printf("Winter");
    }
    else
        printf("-1");
    return 0;
}