#include<bits/stdc++.h>
using namespace std;
float y(float x)
{
    return log(x);
}
float trapezoidal(float x0, float xn, float n)
{
    float h = (xn-x0)/n;
    float s = y(x0)+y(xn);
    for (int i = 1; i < n; i++)
      {
           s += 2*y(x0+i*h);
      }
    return (h/2)*s;
}
int main()
{
    float x0 = 4;//lower value
    float xn = 5.2;//higher value
    int n = 6; //Number of grids
    cout<<"Value of integral is : "<<trapezoidal(x0, xn, n);
    return 0;
}
