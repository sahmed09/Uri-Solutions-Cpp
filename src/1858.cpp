#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,small,cnt,d=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
        cin>>a[i];

    small = a[d];
    cnt=1;

    for(d=0;d<n;d++)
    {
        if(small>a[d])
        {
            small = a[d];
            cnt=d+1;
        }
    }
    cout << cnt << endl;
    return 0;
}
