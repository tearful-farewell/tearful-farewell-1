#include <stdio.h>

int fun(int m, int a[])
{
 int n = 0;
 int i;

 for (i = 1; i < m; ++i)
 {
 if (i%7==0 ||i%11==0)
 {
 a[n] = i;
 n++;
 }
 }
 return n;
}
int main(void)
{ 
 int n;
 int count;
 int a[10000];
 int i;

 printf("Please input m:");
 scanf(" %d", &n);

 count = fun(n, a);
 printf("%d\n", count); 
 for (i = 0; i < count; ++i)
 { 
 printf(" %d ", a[i]); 
 }

 return 0;
}