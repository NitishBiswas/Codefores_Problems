#include <stdio.h>

int main()
{
    int n,i,count=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
