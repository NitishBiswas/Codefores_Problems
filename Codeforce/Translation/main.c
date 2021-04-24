#include <stdio.h>
#include <string.h>

int main()
{
    char a[101],b[101];
    int len,i,j;
    scanf("%s%s",a,b);
    len = strlen(a);
    for(i=0; i<len; i++){
        if(a[i] != b[len-i-1]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
