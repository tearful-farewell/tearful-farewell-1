#include<iostream.h>
#include"math.h"
void main()
{
	float a,b,c,p,s;
	cout<<"�����������������ߵı߳�a��b��c��"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	if(a+b<=c||b+c<=a||a+c<=b)
		cout<<"������������߲�����������\n"<<endl;
	else
		cout<<"�������ε����s="<<s<<endl;
}