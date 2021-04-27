#include <stdio.h>
#include <string.h>

int main()
{
    int len1, len2, i;
    char a[101], b[101], c[101];
    scanf("%s%s",a,b);
    len1 = strlen(a);
    len2 = strlen(b);
    if(len1 == len2){
        for(i = 0; i<len1; i++){
            if(a[i] != b[i]){
                printf("1");
                c[i] = "1";
            }else{
                printf("0");
                c[i] = "0";
            }
        }
        printf("\n");
    }
    return 0;
}
