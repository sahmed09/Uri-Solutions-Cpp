#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,min,pos;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    pos=0;
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            pos=i;
        }
    }
    cout<< "Menor valor: "<<min <<endl<<"Posicao: "<<pos<<endl;
    return 0;
}

