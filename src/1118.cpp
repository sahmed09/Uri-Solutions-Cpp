#include<bits/stdc++.h>
using namespace std;
int main()
{
    label:
    double n,cnt=0,sum=0,media;
    int x;
    while(1)
    {
        cin>>n;
        if(n<0 || n>10)
            cout<< "nota invalida"<<endl;
        else
        {
            cnt++;
            sum=sum+n;
            if(cnt==2) break;
        }
    }
    media=sum/2;
    printf("media = %0.2f\n",media);
    while(1)
    {
        cin>>x;
        cout<< "novo calculo (1-sim 2-nao)"<<endl;
        if(x<1 || x>2)
        {
            cin>>x;
            cout<< "novo calculo (1-sim 2-nao)"<<endl;

        }
        if(x==1)
        {
            cnt=0;
            sum=0;
            goto label;
        }
        if(x==2) break;
    }


    return 0;
}
