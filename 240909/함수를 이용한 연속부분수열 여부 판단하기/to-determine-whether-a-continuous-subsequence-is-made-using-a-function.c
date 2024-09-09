#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    char n1[a], n2[b];
    scanf("%s", n1);
    scanf("%s", n2);

    int i = 0, j = 0;
    while(i < a)
    {
        while(j < b)
        {
            if (i != j)
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
        j = 0;
    }
    if (j != b)
        printf("No");
    return 0;
}