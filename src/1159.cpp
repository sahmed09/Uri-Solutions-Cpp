#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(1)
    {
        int sum=0;
        cin>>x;
        if(x==0)
            break;
        if(x%2==0)
        {
            sum=0;
            for(int i=1;i<=5;i++)
            {
                sum=sum+x;
                x=x+2;
            }
            cout<<sum<<endl;
        }
        else
        {
            x++;
            sum=0;
            for(int i=1;i<=5;i++)
            {
                sum=sum+x;
                x=x+2;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}

