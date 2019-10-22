#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double a[100];
    for(i=0;i<100;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<100;i++)
    {
        if(a[i]<=10)
            printf("A[%d] = %0.1f\n",i,a[i]);
    }
}
