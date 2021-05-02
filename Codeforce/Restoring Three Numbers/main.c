#include <stdio.h>

int main()
{
    int arr[4],i,a,b,c,temp;
    for(i=0; i<4; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<3; i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    c = arr[3] - arr[0];
    b = arr[3] - arr[1];
    a = arr[3] - arr[2];
    printf("%d %d %d\n",a,b,c);
    return 0;
}
