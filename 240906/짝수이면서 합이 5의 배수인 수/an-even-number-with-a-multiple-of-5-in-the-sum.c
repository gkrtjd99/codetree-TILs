#include <stdio.h>

int main() {
    int a, c= 0;
    scanf("%d", &a);
    c = (a % 10) + (a / 10);
    if (c % 5 == 0)
        printf("Yes");
    else
        printf("No");
    return 0;
}