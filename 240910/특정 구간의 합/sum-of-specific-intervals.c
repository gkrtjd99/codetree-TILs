#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int e[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &e[i]);
    }
    int a1[m], a2[m];
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a1[i], &a2[i]);
        int sum = 0;
        int j = 0;
        while (a1[i]+j <= a2[i])
        {
            sum += e[a1[i]-1+j];
            j++;
        }
        printf("%d\n",sum);
    }
    return 0;
}