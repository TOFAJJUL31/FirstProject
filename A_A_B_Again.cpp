#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
    while (t--){
        int n;
        cin>>n;
        int nt=n/10;
        int nt2=n%10;
        cout<<nt+nt2<<endl;
    }
    return 0;
}