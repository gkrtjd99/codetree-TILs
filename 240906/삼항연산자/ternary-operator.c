#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if(a == 100 ? 1 : 0)
        printf("pass");
    else
        printf("failure");
    return 0;
}