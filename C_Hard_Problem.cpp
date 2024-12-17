#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long row1 = (a < m) ? a : m;
        long long row2 = (b < m) ? b : m;
        long long s = (2 * m) - (row1 + row2);
        long long max = row1 + row2 + ((c < s) ? c : s);
        cout<<max<<endl;
    }

    return 0;
}