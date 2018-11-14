#include <stdio.h>

int main(){
	int n;
	float x,y,tmp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%f %f",&x,&y);
		tmp+=(x*y);
	}
	printf("%.3f",tmp);
	return 0;
}
