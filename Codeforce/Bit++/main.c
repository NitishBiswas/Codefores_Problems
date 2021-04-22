#include <stdio.h>

int main()
{
    int n,sum=0,i,j;
    char a[4];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%s",a);
        for(j=0; j<3; j++){
            if(a[j] == '+'){
                sum++;
                break;
            }else if(a[j] == '-'){
                sum--;
                break;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
