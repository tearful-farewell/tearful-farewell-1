#include<iostream.h>
#include"math.h"
void main()
{
	float a,b,c,p,s;
	cout<<"请输入三角形三个边的边长a，b，c："<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	if(a+b<=c||b+c<=a||a+c<=b)
		cout<<"您所输入的三边不构成三角形\n"<<endl;
	else
		cout<<"此三角形的面积s="<<s<<endl;
}