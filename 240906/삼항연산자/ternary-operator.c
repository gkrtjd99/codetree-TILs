#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a = a == 100 ? 1 : 0;
    if(a)
        printf("pass");
    else
        printf("failure");
    return 0;
}