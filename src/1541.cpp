#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(1)
    {
        cin>> a;
        if(a==0)
        {
            break;
        }
        else
        {
            cin>>b>>c;
            int area = (a*b*100)/c;
            int f = pow(area,.5);
            cout<< f << endl;
        }
    }
    return 0;
}
