#include <stdio.h>
#include <stdlib.h>

int max(int n, int *m, int p)
{
    if (n == 0)
        return p;
    if (m[n - 1] > p)
        p = m[n - 1];
    return (max(n-1, m, p));

}

int main() {
    int n, p = 0;
    scanf("%d", &n);
    int *m = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    printf("%d", max(n, m, p));
    free(m);
    return 0;
}