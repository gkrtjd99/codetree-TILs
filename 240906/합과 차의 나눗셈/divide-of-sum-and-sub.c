#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.2f", (a+b+0.00)/(a-b-0.00));
    return 0;
}