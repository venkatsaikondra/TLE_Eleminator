#include<bits/stdc++.h>
vector<int> subsetSum(int n,int t,vector<int>&a,vector<int>&c,int i,int s){
     if (s == t) {
        return c;
    }
    if (i == n) {
        return {};
    }
    c.push_back(a[i]);
    vector<int> left = subsetSum(n, t, a, c, i + 1, s + a[i]);
    if (!left.empty()) return left;  
    c.pop_back();
    vector<int> right = subsetSum(n, t, a, c, i + 1, s);
    if (!right.empty()) return right;
    
    return {};
}
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>r;
    vector<int>c;
    r=subsetSum(n,t,a,c,i,0);
    for(int i=0;i<r.size();i++){
        cout<<r[i];
    }
    cout<<endl;
    return 0;
}