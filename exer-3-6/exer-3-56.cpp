#include<iostream.h>
void main()
{
	int k;
	float r,s,c,pi;
	cout<<"Please input r,k:"<<endl;
	cin>>r>>k;
	pi=3.14159;
	s=pi*r*r;
	c=2*pi*r;
	if(k==1)
		cout<<"圆的面积s="<<s<<endl;
	else
		if(k==2)
			cout<<"圆的周长c="<<c<<endl;
		else
			if(k==3)
				cout<<"圆的面积s="<<s<<","<<"圆的周长c="<<c<<endl;
}
