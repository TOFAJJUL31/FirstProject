#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    
    int nt = 0;
    for(int i = 0; i < t; i++) {
        char gandu;
        int n;
        cin >> gandu >> n;

        if (gandu == 'P') {
            nt += n;
        }
        else if (gandu == 'B') {
            if (nt < n) {
                cout << "YES\n";
                nt = 0; 
            } else {
                cout << "NO\n";
                nt -= n; 
            }
        }
    }
    
    return 0;
}
