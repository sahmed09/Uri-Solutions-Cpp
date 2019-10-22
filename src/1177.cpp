#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,a;
    int n[1000];
    cin>>t;
    a=0;
    for(j=0;j<1000;j++)
    {
        n[j]=j;
        cout<< "N[" << j << "] = " << a <<endl;
        a++;
        if(a==t)
            a=0;
    }
    return 0;
}
