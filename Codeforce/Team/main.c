#include <stdio.h>

int main()
{
    int n,i,j,a[3],k=0,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<3; j++){
            scanf("%d",&a[j]);
            if(a[j] == 1){
                k++;
            }
        }
        if(k>=2){
            count++;
        }
        k=0;
    }
    printf("%d\n",count);

    return 0;
}
