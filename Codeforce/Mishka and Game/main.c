#include <stdio.h>

int main()
{
    int n,a,b,cnt_mishka=0,cnt_chris=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a>b){
           cnt_mishka++;
        }
        else if(a<b){
            cnt_chris++;
        }
    }
    if(cnt_mishka>cnt_chris){
        printf("Mishka\n");
    }
    else if(cnt_chris>cnt_mishka){
        printf("Chris\n");
    }
    else
        printf("Friendship is magic!^^\n");
    return 0;
}
