#include<bits/stdc++.h>
using namespace std;
bool expression(int n, long long x, vector<int>& a, int i, int j, long long s) {
    if(i == n) {
        return (s == x);
    }
    if(expression(n, x, a, i + 1, j, s + a[i])) {
        return true;
    }
    if(expression(n, x, a, i + 1, j, s - a[i])) {
        return true;
    }
    return false;
}

int main(){
    int n;
    long long x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(expression(n,x,a,0,0,0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}