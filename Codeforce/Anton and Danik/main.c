#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0; i<n; i++){
        if(a[i]== 'A'){
            count++;
        }else{
            count--;
        }
    }
    if(count > 0){
        printf("Anton\n");
    }else if(count < 0){
        printf("Danik\n");
    }else{
        printf("Friendship\n");
    }
    return 0;
}
