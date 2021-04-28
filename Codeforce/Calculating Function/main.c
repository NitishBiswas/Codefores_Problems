#include <stdio.h>

int main()
{
    long long int n,ans;
    scanf("%lld",&n);
    if(n%2==0){
        ans=n/2;
    }
    if(n%2==1){
        ans=(n-1)/2-n;
    }
    printf("%lld\n",ans);
    return 0;
}
