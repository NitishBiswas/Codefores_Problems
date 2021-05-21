#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100],l1,l2,i,x;

    gets(s1);
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);

    for(i=0; i<l1; i++)
    {
        if(s1[i]>=65&&s1[i]<=90)
        {
            s1[i]='a'+s1[i]-'A';
        }
    }
    for(i=0; i<l2; i++)
    {
        if(s2[i]>=65&&s2[i]<=90)
        {
            s2[i]='a'+s2[i]-'A';
        }
    }
    x=strcasecmp(s1,s2);
    if(x>0) printf("1\n");
    else if(x<0) printf("-1\n");
    else printf("0\n");


    return 0;

}
