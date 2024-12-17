#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);
     int n;
    cin >> n;

    if (n == 1) {
       
        cout << 0 << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 2) {
     
        cout << 2 << endl;
        cout << arr[0] << " " << arr[1] << endl;
        cout << arr[1] << " " << arr[0] << endl;
        return 0;
    }

   else if(n>2){
    cout << n + 1 << endl;

    vector<pair<int, int>> pairs;

    
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            pairs.push_back({arr[i], arr[j]});
        }
    }


    pairs.push_back({arr[1], arr[0]});

    for (auto &p : pairs) {
        cout << p.first << " " << p.second << endl;
    }
   }

    return 0;
}