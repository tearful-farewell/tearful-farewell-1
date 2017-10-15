#include <iostream.h>
#include<iomanip.h>
void main()
{
    int a, b;
	cout<<"Please input a,b:"<<endl;
    cin>>a>>b;
    cout<<a<<"/"<<b<<"=";
    if (a%b==0)
        cout<<a/b<<endl;
    else
        cout<<a/b<<"..."<<a%b<<endl;
}