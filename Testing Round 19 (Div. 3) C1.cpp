#include<bits/stdc++.h>
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
   string s;cin>>s;
   int n=s.size();
   string pref;pref+=s[0];
   for(int i=1;i<n;i++)
   {
        pref+=s[i];
        string temp;
        int overlap=0;
        for(int j=i;j<i+pref.size();j++)
        {
            if(j>n){
                cout<<"NO"<<endl;
                return;
            }
            temp+=s[j];
        }
        cout<<pref<<' '<<temp<<endl;
        if(pref==temp)
        {
            bool flag=1;
            overlap=2*temp.size()-(i+pref.size());
            cout<<overlap<<endl;
            string s1,s2;
            // last overlap char should be same as first char of s
            for(int k=temp.size()-1,it=0;it<overlap;it++,k--)
            {
                cout<<k<<endl;
                if(k>n)
                {
                    cout<<"NO"<<endl;
                    return;
                }
                s1+=s[it];
                s2+=s[k];
            }
            //
            reverse(all(s2));
            cout<<s1<<' '<<s2<<endl;
            if(s1!=s2)continue;
            cout<<"YES"<<endl;
            for(int k=i;k<n;k++)
            {
                cout<<s[k];
            }
            cout<<endl;
            return;
        }
   }
   cout<<"NO"<<endl;

}

int main() {    
// #ifndef ONLINE_JUDGE
//     freopen("error.txt", "w", stderr);
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
    
    fastio();
    ll T;
    T=1;
    while(T--){
        solve();
    }
}