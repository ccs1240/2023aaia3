#include <stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	printf("%d=50*%d+5*%d+1*%d\n",m,m/50,m%50/5,m%50%5);
	printf("%d %d %d %d",m,m/50,m%50/5,m%50%5);
}