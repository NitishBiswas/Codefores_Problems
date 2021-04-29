#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);

    if (a >= b)
    {
        a -= b;
        a /= 2;
        printf("%d %d\n",b,a);
    }
    else
    {
        b -= a;
        b /= 2;
        printf("%d %d\n",a,b);
    }

    return 0;
}
