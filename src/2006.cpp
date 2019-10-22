#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5],cnt=0;
    cin>>n;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]==n)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
