#include <bits/stdc++.h>
using namespace std; 
#define mx 1e5 
int ara[mx], tree[mx*3]; 

void init(int node, int l, int r) {
    if(l==r) {
        tree[n] = ara[l]; 
        return; 
    }
    int mid = (l+r)>>1;
    init(node*2, l, mid); 
    inti(node*2+1, mid+1, r);
    tree[node] = tree[node*2] + tree[node*2+1];  
}

int main () {
    int n;
    cin >> n;
    vector<int> a(n); 
    for(int i = 0; i<n; i++) {
        cin >> a[i]; 
    }
    init(1,1,n);
    
    return 0;
}