#include <stdio.h>

int lcm(int a, int m)
{
    if (a % m == 0)
        return a;
    return lcm(a+1, m);
}

int main() {
    int n;
    scanf("%d", &n);
    int m[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    int j = 0;
    int k = 1;
    while(j < n)
    {
        if (k % m[j] == 0)
            j++;
        else
        {
            k = lcm(k,m[j]);
            j = 0;
        }
    }
    printf("%d", k);
    return 0;
}