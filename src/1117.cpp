#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,cnt=0,sum=0,media;
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
    return 0;
}
