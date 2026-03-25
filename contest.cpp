/*
    author : amanmaloo
*/    
#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define int long long
#define f(i,n) for(int i = 0 ; i < n ; i++)
#define rf(i,n) for(int i = n-1;i>=0;i--)
#define so(arr) sort(arr.begin(),arr.end())
#define rs(arr)sort(arr.rbegin(),arr.rend())
#define rev(arr) reverse(arr.begin(),arr.end())
#define vi vector<int>
#define v2 vector<vi>
#define v3 vector<v2>
#define v4 vector<v3>
#define pi pair<int,int>
#define pb push_back
#define mii map<int,int>
#define mci map<char,int>
#define mod 1000000007
#define haan cout<<"YES\n";
#define nahi cout<<"NO\n";
#define endl "\n"
#define amanmaloo ios_base::sync_with_stdio(false); cin.tie(nullptr);

int add(int a , int b ) {return (a+b)%mod;}
int mul(int a , int b) {return ((a%mod)*(b%mod))%mod;}
int sub(int a , int b){ return (a-b+mod)%mod;}
int power(int a , int b){
    int ans = 1;
    while(b){
        if(b&1) ans = mul(ans,a);
        b>>=1;
        a = mul(a,a);
    }
    return ans;
}
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
















void solve(){
    
}
signed main()
{ 
    amanmaloo
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
