#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],temp;
    int l,j,i;
    scanf("%s",a);
    l=strlen(a);
    for(i=0; i<l-1; i=i+2){
        for(j=i; j<l; j=j+2){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s\n",a);
    return 0;
}
