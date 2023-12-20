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

    ll t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int oneCount = 0;
        int zeroCount = 0;
        for(auto i: s)
        {
            if(i == '1') oneCount++;
            else zeroCount++;
        }

        cout << abs(oneCount - zeroCount) << "\n";
    }

    return 0;
}