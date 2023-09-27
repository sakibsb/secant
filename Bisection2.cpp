#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.00001
float y(float x)
{
    return x*x*x + 2*x*x - x + 8 ;
}
float bisection(float a , float b)
{
    if(y(a)*y(b) >= 0)
    {
        cout << "You have provided wrong a or b"<<endl;
        return 0;
    }
    float c = a ;
    float p_c = c ;
    int i = 0 ;
    while((b-a)>= EPSILON)
     {
         c = (a+b)/2 ;
         if(y(c)== 0)
         {
             i++;
             cout<<i<<" : "<<y(c)<<endl;
             break ;
         }
         else if(y(a)*y(c)< 0)
         {
             i++;
             b = c ;
             cout<<"ITERATION "<<i<<":"<<b<<endl;
         }
         else
            a = c ;
            i++;
            cout<<"ITERATION"<<i<<":"<<a<<endl;

        if(c == p_c)
        {
            cout << "Converged to the same value, terminating the loop." << endl;
            break;
        }
        p_c = c ;
     }
     return c;
}
int main()
{
    cout<<bisection(-100,100);
    return 0;
}
