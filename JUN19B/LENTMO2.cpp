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

  lli fact(lli n)
  {
      lli res =1;
      for(lli i=1;i<=n;i++)
      {
          res=(res*i)%MOD;
      }
      return res%MOD;
  }

  int main()
  {
    PKMKB;
    lli t;
    cin >> t;
    while(t--)
    {
        lli x,y,z,q,l,r;
        cin >> l >> r;
        lli sum=0;
        x=1,y=2,z=3,q=4;
        lli val = (l*(l+1)*(l+2)*(l+3))%MOD;
        if(l==r) cout << val << endl;
        else{
        //cout << sum << endl;
        lli st=l;
        lli en=l+3;
        for(lli i=0;i<r-l;i++)
        {
            en++;
            val=(val*(en)/st)%MOD;
            sum=(sum+val);
            //cout << sum << endl;
            st++;
        }
        cout << sum%MOD << endl;}
    }
    return 0;
}
