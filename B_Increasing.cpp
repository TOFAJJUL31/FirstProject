#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int nt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            for (int j=0;j<i;j++){
                if(arr[i]==arr[j])
                nt=1;
            }
        }
        if (nt==0)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
}        