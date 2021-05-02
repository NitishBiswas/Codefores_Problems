#include <stdio.h>

int main()
{
    int n,i,cnt=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>0)
            sum+=a[i];
        else if(sum>0)
            sum--;
        else
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}
