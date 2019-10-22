#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a[12][12],avg,sum=0.0;
    int i,j,cnt=0;
    char c;
    cin>>c;
    int n=11;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>a[i][j];
            if(i<j && j<n)
            {
                cnt++;
                sum=sum+a[i][j];
            }
        }
        n=n-1;
    }
    if(c=='S')
        printf("%0.1f\n",sum);
    else if(c=='M')
    {
        avg=sum/cnt;
        printf("%0.1f\n",avg);
    }

    return 0;
}

