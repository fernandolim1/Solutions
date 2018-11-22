#include <stdio.h>

int fac(int n){
	if(n==1) return 1;
	else return n*fac(n-1);
	
}

int main(){
	int t,n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		printf("%d\n",fac(n)%10);
	}
	return 0;
}
