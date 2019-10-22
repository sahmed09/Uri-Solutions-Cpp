#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i;
    double S=0,c=1,d;
    for(i=1;i<=39;i=i+2)
    {
        d=i/c;
        S=S+d;
        c=c*2;
    }
    printf("%0.2f\n",S);
    return 0;
}
