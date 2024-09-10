#include <stdio.h>

int find(char *a, char *b)
{
    int i = 0;
    int j = 0;
    while(a[i])
    {
        j = 0;
        if(a[i] == b[j])
        {
            while(a[i+j] == b[j] && b[j])
                j++;
            if(b[j] == '\0')
                return(i);
        }
        i++;
    }
    return (-1);
}
int main() {
    char a[1000], b[1000];
    scanf("%s", a);
    scanf("%s", b);
    printf("%d", find(a,b));
    return 0;
}