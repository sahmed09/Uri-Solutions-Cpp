#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    long long int a[61];
    a[0]=0;
    a[1]=1;
    for(i=2;i<61;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<< "Fib(" << n << ") = " << a[n] <<endl;
    }
    return 0;
}
