#include <bits/stdc++.h>
using namespace std;

void sln(int y)
{
    int n; cin>>n;
	vector<long long> v(n),an1(n,1),an2(n,1);
	for(int i=0; i<n; i++) cin>>v[i];
	for(int i=0; i+1<n; i+=2){
		ans1 = max(ans1,abs(v[i+1]-v[i]));
	}
	reverse(v.begin(), v.end());
	for(int i=0; i+1<n; i+=2){
		//cout<<abs(v[i+1]-v[i])<<" ";
		ans2 = max(ans2,abs(v[i+1]-v[i]));
	}
	cout<<min(ans1,ans2)<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; cin >> t;
    for (int i = 1; i <= t; i++) sln(i);
    return 0;
}