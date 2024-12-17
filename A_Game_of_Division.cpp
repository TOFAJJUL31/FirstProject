#include <bits/stdc++.h>
using namespace std;


void solv()
{
    int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int dj = 1;
            for (int j = 0; j < n; j++)
            {
                if (i != j && abs(a[i] - a[j]) % k == 0)
                    dj = 2;
            }
            if (dj == 1)
            {
                cout << "YES\n"<< i + 1 << endl;
                return;
            }
        }
            cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    bool x = 1;
    while (t--)
    {
        solv();
    }
    return 0;
}