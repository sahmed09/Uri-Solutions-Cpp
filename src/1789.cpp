#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        int a[t],max=0;
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            if(a[i]>max)
                max=a[i];
        }
        if(max<10) printf("1\n");
        else if(max>=20) printf("3\n");
        else printf("2\n");
    }
    return 0;
}
