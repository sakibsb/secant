#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return log(x);
}
float t(float x0 , float xn , float n)
{
    float h  = (xn - x0)/n ;
    float sum = f(x0) + f(xn) ;
    for (int i = 1 ; i < n ; i++)
    {
        sum += 2 * f(x0 + i * h);
    }
    return (h/2) * sum ;
}
int main()
{
   cout<<"Trapizoidal : "<<t(4 , 5.2 , 6);
    return 0 ;
}
