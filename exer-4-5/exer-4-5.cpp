#include<iostream.h>
void main() 
{
 int i;
 for(i=1;i<=99;++i) 
 {
  if(i*i%10==i||i*i%100==i)
   cout<<i<<endl;
 }
}
