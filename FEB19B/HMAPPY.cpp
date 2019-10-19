/*@authored by: Subham Pratap*/

/* ************************************************************************************************************************** */

#include <bits/stdc++.h>
using namespace std;
#define PKMKB ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define lli long long int
#define ull unsigned long long
#define INT_MAX 2147483647
#define all(a) begin(a),end(a)
#define pb push_back
#define mp make_pair
#define S second
#define F first
#define MOD 1000000007

/* Look Bitch, Don’t mess with any of the code from here
   to the end of the function. None of us understand it,
   and any change seems to break the program in ways
   we don’t fuckin' understand. */

  int main()
  {
    PKMKB;
    lli t;
    cin >> t;
    while(t--)
    {
        lli n,z;
        cin >> n >> z;
        vector<lli>v;
        lli hit=INT_MAX ;
        for(lli i=0;i<n;i++)
        {
            lli k;
            cin >> k;
            v.pb(k);
        }
        sort(v.begin(),v.end());
        for(lli i=0;i<v.size();i++)
        {
            if(v[i]*(v.size()-i)<hit)
                hit=v[i]*(v.size()-i);
        }
            cout << hit << endl;
    }
    clock_t clk = clock();
    clk = clock() - clk;
    cerr << "Time Elapsed: " << fixed << setprecision(10) << ((long double)clk)/CLOCKS_PER_SEC << "\n";
    return 0;
}
