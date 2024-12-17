#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        int a,b;
        char c;
        cin>>a>>c>>b;
        
        if (a==b)
        {
            cout<<a<<'='<<b<<endl;

        }
         else if (a<b)
        {
            cout<<a<<'<'<<b<<endl;

        }
        else if (a>b)
        {
            cout<<a<<'>'<<b<<endl;

        }
    }
        return 0;
}
    