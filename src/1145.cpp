#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,cnt=0;
    cin>>x>>y;
    for(int i=1;i<=y;i++)
    {
        cnt++;
        if(cnt!=x)
        {
            cout<<i << " ";
        }
        if(cnt==x)
        {
            cout<<i;
            cnt=0;
            cout<<endl;
        }

    }
    return 0;
}
