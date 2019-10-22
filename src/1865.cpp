#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,weight;
    string name;
    cin>>test;
    while(test--)
    {
        cin>>name>>weight;
        if(name=="Thor")
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
