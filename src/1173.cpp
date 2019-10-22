#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    int n[10];
    cin>>v;
    for(int i=0;i<=9;i++)
    {
        n[i]=v;
        cout<< "N[" << i << "] = " << v <<endl;
        v=v*2;
    }
    return 0;
}
