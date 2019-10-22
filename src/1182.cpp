#include<bits/stdc++.h>
using namespace std;
int main()
{
    float M[12][12];
    int i,j,n;
    float avg,sum=0.0;
    char c;
    cin>>n>>c;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>M[i][j];
            if(j==n)
            {
                sum+=M[i][j];
            }
        }
    }
    if(c=='S')
        printf("%0.1f\n",sum);
    else if(c=='M')
    {
        avg=sum/12.0;
        printf("%0.1f\n",avg);
    }
    return 0;
}
