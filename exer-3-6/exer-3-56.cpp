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
		cout<<"Բ�����s="<<s<<endl;
	else
		if(k==2)
			cout<<"Բ���ܳ�c="<<c<<endl;
		else
			if(k==3)
				cout<<"Բ�����s="<<s<<","<<"Բ���ܳ�c="<<c<<endl;
}
