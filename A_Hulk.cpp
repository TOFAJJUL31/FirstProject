#include<bits/stdc++.h>
using namespace std;

int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
   cin>>n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
           cout<<"I hate";
        } 
        else {
            cout<<"I love";
        }
        if (i != n) {
            cout<<" that ";
        } 
        else {
            cout<<" it\n";
        }
    }

    return 0;
}