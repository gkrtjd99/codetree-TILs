#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    if (a < 0.5)
        printf("Low");
    else if (a < 1.0)
        printf("Middle");
    else
        printf("High");
    return 0;
}