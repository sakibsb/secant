#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    return x*x*x + 2*x*x -x + 8;
}
void falsi(double a,double b)
{
    if(func(a)*func(b)>=0)
   {
    cout<<"You have provided wrong a/b"<<endl;
    return;
   }
   double c = a;
   int i ;
   for(i=0;i<10000000;i++)
   {
       c=(a*func(b)-b*func(a))/(func(b)-func(a));
       if(func(c)==0)
       {
           break;
       }
       else if(func(a)*func(c)<0)
       {
           b=c;
       }
       else
          a=c;
   }
   cout<<"This is root : "<<c<<endl;
   cout<<"This is Iteration number : "<<i;

}
int main()
{
    double a=-300,b=200;
    falsi(a,b);
    return 0;
}
