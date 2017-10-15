#include<iostream.h>
void main()
{
	int x,y;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x%3==0)
		y=1;
	else
		if(x%7==0)
			y=1;
		else
			y=0;
	if(y==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

