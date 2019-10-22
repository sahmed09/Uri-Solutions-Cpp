#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i;
    double S=0;
    for(i=1;i<=100;i++)
    {
        S=S+(1/i);
    }
    printf("%0.2f\n",S);
    return 0;
}
