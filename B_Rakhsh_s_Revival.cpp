#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--){
        int n,m,k;
        string s;
        cin>>n>>m>>k;
        cin>>s;
        int zero=0,ans=0,nt=0;
    for (int i = 0; i < n; i++)
    {
        if (zero==0)
        {
            if (s[i]=='0')
            {
                nt++;
            }
            else
            nt=0;
            if (nt==m)
            {
                nt=0;
                ans++;
            
            zero=k-1;
            }
           
            
        }
         else
        zero=1;
        
    }
    cout<<ans<<endl;
    }
    return 0;
}
    