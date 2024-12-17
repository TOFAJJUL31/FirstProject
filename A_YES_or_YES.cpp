#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
int n;cin>>n;
while (n--)
{
    string s;
    cin>>s;
    for (int i = 0; i < 3; i++)
    {
        s[i]=tolower(s[i]);
        }
    if(s=="yes")
    cout<<"YES\n";
    else
    cout<<"NO\n";
}


    return 0;
}