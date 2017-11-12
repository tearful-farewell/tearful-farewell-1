#include<stdio.h>
double fun(int n)
{
	if(n==1)     
		return 1.0;
	else      
		return 1.0/(n*(n+1)/2)+fun(n-1);
}
int main()
{
	int c;
	scanf("%d",&c);
	printf("%lf\n",fun(c));
}