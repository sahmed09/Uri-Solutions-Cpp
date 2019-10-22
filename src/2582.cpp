#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x;
    string c[11]={"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=a+b;
        if(x==0) cout<< c[0]<<endl;
        else if(x==1) cout<<c[1]<<endl;
        else if(x==2) cout<<c[2]<<endl;
        else if(x==3) cout<<c[3]<<endl;
        else if(x==4) cout<<c[4]<<endl;
        else if(x==5) cout<<c[5]<<endl;
        else if(x==6) cout<<c[6]<<endl;
        else if(x==7) cout<<c[7]<<endl;
        else if(x==8) cout<<c[8]<<endl;
        else if(x==9) cout<<c[9]<<endl;
        else if(x==10) cout<<c[10]<<endl;
    }
    return 0;
}
