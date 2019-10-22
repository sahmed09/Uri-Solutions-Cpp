#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,cnt=0,draw=0,team1=0,team2=0;
    label:
    while(1)
    {
        cnt++;
        cin>>n>>m;
        if(n>m)
            team1++;
        else if(m>n)
            team2++;
        else
            draw++;
        cout<< "Novo grenal (1-sim 2-nao)" <<endl;
        cin>> x;
        if(x==1)
            goto label;
        if(x==2)
            break;
    }
    cout << cnt << " grenais" <<endl;
    cout<< "Inter:" << team1<<endl;
    cout<< "Gremio:" << team2<<endl;
    cout<< "Empates:" << draw <<endl;
    if(team1==team2)
        cout << "Nao houve vencedor" <<endl;
    else if(team1>team2)
        cout<< "Inter venceu mais" <<endl;
    else
        cout << "Gremio venceu mais" <<endl;
    return 0;
}
