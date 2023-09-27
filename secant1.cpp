#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return x*x*x + 2*x*x -x + 8 ;
}
float s(float x0, float x1, float e)
{
     int n =5, j ;
    for(int i=1; i<=n; i++)
    {
        float x2 = x1 - ((x0-x1)*f(x1))/(f(x0)-f(x1));
        if(x2 > e)
        {
            x0 = x1 ;
            x1 = x2 ;
            j++;
            cout << "iter " << j <<" = "<< x1<<endl;
        }
    }
}
int main()
{
    cout<<s(-100,100,0.01);
    return 0;
}
