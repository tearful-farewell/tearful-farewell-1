#include<iostream.h>
void main()
{
	int x;
	cout<<"Please input x:";
	cin>>x;
	switch(x/10)
	{
	case 0:cout<<"小于10\n";break;
	default:
		switch(x/100)
		{
			case 0:cout<<"10~99\n";break;
			default:
				switch(x/1000)
				{
						case 0:cout<<"100~999\n";break;
						default:cout<<"1000以上\n";
				}
		}
	}
}
	



