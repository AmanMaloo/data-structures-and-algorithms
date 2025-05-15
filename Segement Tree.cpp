
void build(int ind,int low,int high){
    if(low == high) {
        seg[ind] = arr[low];
        return;
    }
    int mid = (low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind] = min(seg[2*ind+1],seg[2*ind+2]);
}
int query(int ind,int low,int high,int l,int r){
    if(low>=l && high<=r) return seg[ind];
    if(low>r || high<l ) return INT_MAX;
    int mid = (low+high)/2;
    int left = query(2*ind+1,low,mid,l,r);
    int right = query(2*ind+2,mid+1,high,l,r);
    return min(left,right);
}
