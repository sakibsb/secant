#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return log(x);
}
float s(float x0 ,float xn , float n)
{
    float h = (xn - x0)/n ;
    float sum = f(x0) + f(xn) ;
    for(int i  = 1 ; i < n ; i++)
    {
        if(i % 2 != 0)
        {
            sum += 4 * f(x0 + i*h);
        }
        else
            sum +=2 * f(x0 + i*h);
    }
    return (h/3)*sum;
}
int main()
{
    cout<<"simpson :"<<s(4 , 5.2 , 6);
    return 0;
}

