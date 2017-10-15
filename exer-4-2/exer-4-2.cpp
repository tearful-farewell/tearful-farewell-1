#include<iostream.h>
void main()
{
	int i,tab,j=0;
for(i=2000;i<=3000;i++)
{
	tab=0;
    if(i%4!=0) 
	{tab=1;}
    if(i%4==0&&i%100==0&&i%400!=0) 
	{tab=1;}
    if(tab==0)
	{
	cout<<"\t"<<i;
	j++;
    if(j%10==0)
	cout<<endl;
	}
}
cout<<endl<<"2000年到3000年闰年总数目为:"<<j<<endl;
}
