#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = 1;
    for(int i =0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a > 9)
                a = 1;
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}