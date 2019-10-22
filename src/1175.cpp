#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp;
    int a[20];
    for(i=0;i<20;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=19;i<10;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<20;i++)
        cout<<"N["<<i<<"] = " << a[i]<<endl;
    return 0;
}
