#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,n[100];
    cin>>x;

    for(int i=0;i<100;i++)
    {
        n[i]=x;
        printf("N[%d] = %0.4lf\n",i,n[i]);
        x=x/2;
    }
    return 0;
}
