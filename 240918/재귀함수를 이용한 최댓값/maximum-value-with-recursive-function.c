#include <stdio.h>

int max(int n, int *m, int p)
{
    if (n == 0)
        return p;
    else if(m[n] < p)
        return p;
    else if (m[n] > p)
        p = m[n];
    return (max(n-1,m,p),p);
}

int main() {
    int n, p = 0;
    int m[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    printf("%d", max(n, m, p));
   
    return 0;
}