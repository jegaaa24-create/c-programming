#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int fact = 0;
for(int i=1; i<=n; i++)
{
	fact = fact + i;
}
printf("%d",fact);
}
	