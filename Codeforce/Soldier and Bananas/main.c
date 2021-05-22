#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n, t, k, w;
	long long sum=0;

	scanf("%d%d%d",&k,&n,&w);
	for(i=1; i<=w; i++){
		sum = sum+(i*k);
	}
	if(sum<= n){
		printf("0\n");
	}
	else printf("%d\n",sum-n);

	return 0;
}
