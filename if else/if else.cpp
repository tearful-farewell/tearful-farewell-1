#include<iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"小于10"<<endl;
	else
		if(x>=10&&x<=99)
			cout<<"10~99"<<endl;
		else
			if(x>+100&&x<=999)
				cout<<"100~999"<<endl;
			else
					cout<<"1000以上"<<endl;
}