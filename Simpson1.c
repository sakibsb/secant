#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return log(x);
}
float s(float x0 ,float xn , float n)
{
    float h = (xn - x0)/n ;
    sum = f(x0) + f(xn) ;
    for(int i  = 1 ; i < n ; i++)
    {
        if(i % 2 != 0)
        {
            sum += f(x0 + i*h);
        }
        else
            sum +=f(x0 + i*h);
    }
    return (h/3)*s;
}
int main()
{
    cout<<"simpson :"<<s;
    return 0;
}
