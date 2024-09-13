#include <iostream>
using namespace std;

int f_x(int n)
{
    if(n < 10)
        return n*n;
    return (f_x(n/10) + (n%10)*(n%10));
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d",f_x(a));
    return 0;
}