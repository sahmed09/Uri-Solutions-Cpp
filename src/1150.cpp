#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,z,c=0,cnt=1;
    cin>>x>>z;
    while(x>=z)
    {
        cin>>z;
    }
    for(int i=x;i<z;i++)
    {
        c=c+i;
        if(c>z) break;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
