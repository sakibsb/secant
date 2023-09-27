#include<bits/stdc++.h>
using namespace std;
float y(float x)
{
    return log(x);
}
float simpson(float a , float b , float n)
{
    float h = (b-a)/ n ;
    float s = y(a) + y(b) ;
    for(int i =1 ; i < n ; i++)
    {
        if(i % 2 != 0)
        {
            s += 4 * y(a + i * h);
        }
        else
        {
            s += 2 * y(a + i * h);
        }
    }
    return (h/3)*s;
}
int main()
{

    cout << "Total : " << simpson( 4, 5.2 ,6);
    return 0;
}
