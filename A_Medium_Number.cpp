#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--)
    {int a[3];
    int n=sizeof(a)/sizeof(a[0]); 
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[1]<<endl;
    }
    return 0;
}
    