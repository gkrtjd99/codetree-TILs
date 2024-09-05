#include <stdio.h>

int main() {
    int a;
    int b;
    int h = 0;
    int v = 0;
    int w = 0;
    scanf("%d %d", &a, &b);
    h = a + 8;
    v = b * 3;
    w = h * v;
    printf("%d\n%d\n%d", h, v, w);
    return 0;
}