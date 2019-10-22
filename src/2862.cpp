#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,level;
    cin>>test;
    while(test--)
    {
        cin>>level;
        if(level<=8000)
            cout << "Inseto!" <<endl;
        else
            cout << "Mais de 8000!" <<endl;
    }
    return 0;
}
