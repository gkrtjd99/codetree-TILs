#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int n1[a], n2[b];
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &n1[i]);
    }
    for(int i = 0; i < b; i++)
    {
        scanf("%d", &n2[i]);
    }
    int i = 0, j = 0;
    while(i < a)
    {
        j = 0;
        while(j < b)
        {
            if (n1[i] != n2[j])
                break;
            j++;
            i++;
        }
        if (j == b)
        {
            printf("Yes");
            break;
        }
        i++;
    }
    if (j != b)
        printf("No");
    return 0;
}