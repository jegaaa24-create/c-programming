#include<stdio.h>
int main(){
	int a,b,c,t;
	float avg;
	scanf("%d%d%d",&a,&b,&c);
	t=a+b+c;
	avg=t/3;
	printf("%d",t);
	printf("%f",avg);
	return 0;
}