#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&i);
        if(i == 1){
            printf("HARD\n");
            return 0;
        }
        n--;
    }
    printf("EASY\n");
    return 0;
}
