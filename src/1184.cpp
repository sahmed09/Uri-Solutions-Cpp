#include<bits/stdc++.h>
using namespace std;
int main()
{
    float M[12][12];
    int i,j,cnt=0;
    float avg,sum=0.0;
    char c;
    cin>>c;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>M[i][j];
            if(i>j)
            {
                cnt++;
                sum+=M[i][j];
            }
        }
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


