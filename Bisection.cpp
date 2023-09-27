#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01
double func(double x)
{
    return x*x*x + 2*x*x -x + 8 ;
}
void bisection(double a , double b)
{
    if(func(a)*func(b)>=0)
    {
        cout<<"You have provided Wrong a/b"<<endl;
        return;
    }
    double c;
     int j=0;
     for(int i=0 ; i<=100; i++)
    {
        j++;
        c = (a+b)/2;
        if(func(c)==0)
        {
            break;
        }
        else if(func(a)*func(c)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }

    }
    cout<<"This is root :"<<c<<endl;
    cout<<"Iteration : "<<j;
}
int main()
{
    double a=-100,b=100;
    bisection(a,b);
    return 0;
}

