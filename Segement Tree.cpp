#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define f(i,n) for(ll i = 0 ; i < n ; i++)
#define rf(i,n) for(ll i = n-1;i>=0;i--)
#define so(arr) sort(arr.begin(),arr.end())
#define rs(arr)sort(arr.rbegin(),arr.rend())
#define rev(arr) reverse(arr.begin(),arr.end())
#define vi vector<int>
#define pi pair<int,int>
#define pb push_back
#define mii map<int,int>
#define mci map<char,int>
void build(ll ind,ll low,ll high,vl&arr,vl&seg){
    if(low == high) {
        seg[ind] = arr[low];
        return;
    }
    ll mid = (low+high)/2;
    build(2*ind+1,low,mid,arr,seg);
    build(2*ind+2,mid+1,high,arr,seg);
    seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
}
ll query(ll ind,ll low,ll high,ll l,ll r,vl&seg){
    if(low>=l && high<=r) return seg[ind];
    if(low>r || high<l ) return INT_MAX;
    ll mid = (low+high)/2;
    ll left = query(2*ind+1,low,mid,l,r,seg);
    ll right = query(2*ind+2,mid+1,high,l,r,seg);
    return min(left,right);
}
int main(){
    ll n;
    cin>>n;
    vl arr(n);
    f(i,n) cin>>arr[i];
    vl seg(4*n);
    build(0,0,n-1,arr,seg);
    ll q;
    cin>>q;
    f(i,q){
        ll l,r;
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r,seg)<<endl;
    }
}
