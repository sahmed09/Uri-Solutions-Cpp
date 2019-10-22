#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int q = a/b;
    int r = abs(a%b);
    cout<< q << " " << r << endl;
    return 0;
}
