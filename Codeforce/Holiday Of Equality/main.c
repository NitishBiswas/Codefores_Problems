#include <stdio.h>
int main()
{
    int i, n, x, sum=0, max=0;
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(x>max){
            max=x;
        }
        sum+=x;
    }
    printf("%d\n",n*max-sum);
    return 0;
}
