#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
int t;
cin>>t;
while (t--)
{
    string g;
    cin>>g;
    if(g[0]+g[1]+g[2]==g[3]+g[4]+g[5])
    cout<<"YES\n";
    else
    cout<<"NO\n";
}


    return 0;
}