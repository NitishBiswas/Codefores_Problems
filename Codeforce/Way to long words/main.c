#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,l;
    char str[100];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%s",str);
        l = strlen(str);
        if(l>10){
            printf("%c%d%c\n",str[0],l-2,str[l-1]);
        }else{
            printf("%s\n",str);
        }
    }

    return 0;
}
