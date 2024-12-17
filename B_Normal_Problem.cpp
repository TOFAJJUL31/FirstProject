#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        for (char& c : s) {
            if (c == 'p') {
                c = 'q';
            } else if (c == 'q') {
                c = 'p';
            }
        }
        cout<<s<<endl;
    }
    
    return 0;
}