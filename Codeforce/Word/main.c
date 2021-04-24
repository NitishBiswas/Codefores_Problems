#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[101];
    int len,count=0,i;
    scanf("%s",a);
    len = strlen(a);
    for(i=0; i<len; i++){
        if(isupper(a[i])){
            count++;
        }
    }
    if(len/2<count){
        for(i=0; i<len; i++){
            if(islower(a[i])){
                a[i] = toupper(a[i]);
            }
        }
    }else{
        for(i=0; i<len; i++){
            if(isupper(a[i])){
                a[i] = tolower(a[i]);
            }
        }
    }
    printf("%s\n",a);
    return 0;
}
