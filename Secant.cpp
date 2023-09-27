/*Input : equation = x3 + x – 1
             x1 = 0, x2 = 1, E = 0.0001
Output : Root of the given equation = 0.682326
               No. of iteration=5
*/
#include<bits/stdc++.h>
using namespace std;
float y(float x)
{
    return x*x*x + x -1 ;
}
float sec(float x0, float x1, float e)
{
    int n =5, j ;
    for(int i=1; ; i++)
    {
        float x2 = x1 - ((x0-x1)*y(x1))/(y(x0)-y(x1));
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
    sec(0, 1, 0.0001);
    return 0;
}
