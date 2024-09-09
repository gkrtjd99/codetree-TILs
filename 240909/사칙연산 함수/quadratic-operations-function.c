#include <stdio.h>

int p(int a, int b)
{
    return(a+b);
}
int mi(int a, int b)
{
    return(a-b);
}
int mu(int a, int b)
{
    return(a*b);
}
int d(int a, int b)
{
    return(a/b);
}
int main() {
    int a, c;
    char o;
    scanf("%d %c %d",&a, &o, &c);
    if (o == '+')
        printf("%d %c %d = %d",a, o, c, p(a,c));
    else if (o == '-')
        printf("%d %c %d = %d",a, o, c, mi(a,c));
    else if (o == '/')
        printf("%d %c %d = %d",a, o, c, d(a,c));
    else if (o == '*')
        printf("%d %c %d = %d",a, o, c, mu(a,c));
    else
        printf("False");
    return 0;
}