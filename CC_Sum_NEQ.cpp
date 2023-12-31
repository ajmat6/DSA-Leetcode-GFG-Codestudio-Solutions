#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<pii> vpii;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
const int mod = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n; 
        cin >> n;

        vi a (n);
        for(int i=0; i<n; i++) cin >> a[i];

        if(n == 4)
        {
            if(a[0] + a[1] != a[2] + a[3]) cout << "YES\n";
            else cout << "NO\n";
        }

        else 
        {
            bool same = true;
            int value = a[0];
            for(int i=1; i<n; i++)
            {
                if(a[i] != value) same = false;
            }

            if(same) cout << "NO\n";
            else cout << "YES\n";
        }
    }

    return 0;
}