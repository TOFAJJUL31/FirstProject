#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        // if (sum!=2*n&&sum%n!=0)
        // {
        //     cout<<"NO\n";
        // }
        
        
        if (sum%n==0&&sum>2*n)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    
     return 0;
}