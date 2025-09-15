#include<stdio.h>
int main()
{
int num;
scanf("%d",&num);
int last, rev=0;
while(num>0)
{
	last=num%10;
	rev=(rev*10)+last;
	num = num/10;
}
printf("%d",rev);
}

