
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k; 
    vector<int> arr(n);  
   
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    
    sort(arr.begin(), arr.end(), greater<int>());

    
    int i = 0;
    while (i < n) {
        if (k >= arr[i]) {
            k -= arr[i];
            ++i; 
        } else {
            break;  
        }
        
        
        if (k == 0) {
            cout << 0 << endl;
            return;
        }
    }

  
    cout << k << endl;
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        
    solve();  
    }
    return 0;
}
