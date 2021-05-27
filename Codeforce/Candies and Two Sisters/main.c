
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1 || arr[i]==2)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",(arr[i]-1)/2);
        }
    }
    return 0;
}
