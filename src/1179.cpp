#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int arr[15];

    for(int i=0;i<15;i++)
        cin>>arr[i];

    vector<ll>par,impar;

    for(ll i=0;i<15;i++)
    {
        if(arr[i]%2==0)
            par.push_back(arr[i]);
        else
            impar.push_back(arr[i]);
    }

    ll size=par.size();
    ll dif=size-4;
    for(ll i=0;i<size;i++)
    {
        printf("par[%lld] = %lld\n",i,par[i]);

        if(i==4) break;
    }

    ll p=0;
    ll s1=impar.size();
    for(ll i=0;i<s1;i++)
    {
        printf("impar[%lld] = %lld\n",p,impar[i]);
        p++;
        if(p==5) p=0;
    }

    p=0;
    if(dif>=1)
    {
        for(ll i=5;i<size;i++)
        {
            printf("par[%lld] = %lld\n",p,par[i]);
            p++;
            if(p==5) p=0;
        }
    }

    return 0;
}
