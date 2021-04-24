#include <stdio.h>

int main()
{
    int i,cnt=0;
    char s[20];
    scanf("%s",s);
    for(i=0; i<strlen(s); i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            cnt++;
        }
    }
    if(cnt==4||cnt==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
