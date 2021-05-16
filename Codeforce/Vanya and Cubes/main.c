#include <stdio.h>

int main()
{
    int n,i,x,cnt=0,sum=0;
    scanf("%d",&n);
    x=1;
    while(1){
       for(i=1;i<=x;i++){
            sum+=i;
       }
       x++;
       if(sum>n)
        break;
       cnt++;

    }
    printf("%d\n",cnt);
    return 0;
}
