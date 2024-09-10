#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a];
    for(int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        if(b[i] < 0)
            b[i] *= -1;
        printf("%d ", b[i]);
    }
    return 0;
}