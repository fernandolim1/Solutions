#include <stdio.h>

int main(){
	float x,y;
	int z,v;
	scanf("%f",&x);
	y=x*10000*5280/4854;
	v=y;
	z=x*1000*5280/4854;
	if (v%10 >= 5){
		z+=1;
	}
	printf("%d",z);
	return 0;
}
