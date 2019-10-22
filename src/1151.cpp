#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,number;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        if(i==1)
        {
            cout<<n1;
            continue;
        }
        if(i==2)
        {
            cout<< " " << n2;
            continue;
        }
        n3=n1+n2;
        cout<< " "<<n3;
        n1=n2;
        n2=n3;
    }
    cout<<endl;
}
