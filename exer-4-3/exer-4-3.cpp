#include<iostream.h>
void main()
{
int n,count=0;
cout<<"Please input n:"<<endl;
cin>>n; 
do{
if(n%2)
{
n=n*3+1; 
++count;
cout<<"["<<count<<"]:"<<(n-1)/3<<"*3+1="<<n<<endl;
}
else
{
n/=2; 
++count;
cout<<"["<<count<<"]:"<<2*n<<"/2="<<n<<endl;
}
}while(n!=1); 
}