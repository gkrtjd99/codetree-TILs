#include <stdio.h>

int acd(int n)
{
    if(n == 0)
        return (0);
    acd(n-1);
    printf("%d ",n);    
}
int dcd(int n)
{
    if(n == 0)
        return (0);
    printf("%d ",n);
    dcd(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    acd(n);
    printf("\n"); 
    dcd(n);    
    return 0;
}