#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[1000];
    int l,i;
    scanf("%s",a);
    l=strlen(a);
    if(islower(a[0])){
        a[0]=toupper(a[0]);
    }
    printf("%s\n",a);
    return 0;
}
