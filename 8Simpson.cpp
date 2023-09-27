#include<bits/stdc++.h>
using namespace std;
float y(float x)
{
    return log(x);
}
float simpson(float x0 , float xn , float n)
{
    float h = (xn - x0)/n ;
    float s = y(x0)+y(xn);
    for(int i = 1 ; i < n ; i++)
    {
        if(i % 3 != 0)
        {
            s += 3 * y(x0 + i * h);
        }
         else
         {
             s += 2 * y(x0 + i * h);
         }
    }
    return ((3*h)/8) * s ;
}
int main()
{
    cout << "Total : "<<simpson(4,5.2,6);
    return 0;
}
