#include<bits/stdc++.h>
using namespace std;
float y(float x)
{
    return x*x*x + 2*x*x - x +8 ;
}
float falsemethod(float a,float b)
{
    if(y(a)*y(b) >= 0)
    {
        cout<<"You have provided wrong a or b ."<<endl;
        return 0;
    }
    float c;
    for(int i=0 ; i<=10000000; i++)
    {
        c = (a*y(b)-b*y(a))/(y(b)-y(a));
        if(y(c)==0)
        {
            break;
        }
        else if(y(a)*y(c)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    return c;
}
int main()
{
    cout<<falsemethod(-100,100);
    return 0;
}
