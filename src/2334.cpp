#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        else
        {
            if(n==0) cout<<"0"<<endl;
            else cout<<n-1<<endl;
        }
    }
    return 0;
}
