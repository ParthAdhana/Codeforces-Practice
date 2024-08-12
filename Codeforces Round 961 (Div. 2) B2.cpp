Codeforces Round 961 (Div. 2)#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*    *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *   *    *    *   */
         
/*



*/

void solve()
{
    ll n,sm;cin>>n>>sm;
    vector<ll>a(n);
    vector<ll>b(n);
    map<ll,ll>mp;
    bool flag=0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i]<=sm)flag=1;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        mp[a[i]]=b[i];
    }
    // if(flag==0){
    //     cout<<0<<endl;
    //     return;
    // }
    ll ans=0;
    debug(mp)
    for(int i=0;i<n;i++)
    {
        ll times=b[i];
        ll number=a[i];
        // (k1+k2)x +k2<=sm;
        ll mx=(mp[a[i]]+mp[a[i]+1])*a[i]+mp[a[i]+1];
        debug(a[i])
        debug(mx)
        if(mx<=sm)
        {
            
            ans=max(ans,mx);
            // if(mx==sm)
            // {
            //     debug(a[i])
            //     debug(mx)    
            // }
            
        }
        else
        {
            if(mp[a[i]+1]==0)
            {
                ll t=sm/a[i];
                ans=max(ans,a[i]*t);
                continue;
            }
            ll let=min(mp[a[i]],sm/a[i]);
            debug(let)
            ll x=sm-let*a[i];
            x/=(a[i]+1);
            ll temp2=(let*a[i]+x*(a[i]+1));
            debug(x)
            debug(temp2)
            
            ans=max(ans,min(sm,temp2+min(let,mp[a[i]+1]-x)));
        }
        debug(ans)
    }
    cout<<ans<<endl;
    
    
}

int main() {    
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    
    fastio();
    ll T;cin>>T;
    while(T--){
        solve();
    }
}

