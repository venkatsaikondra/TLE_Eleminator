#include<bits/stdc++.h>
using namespace std;
int knapsack(int w,vector<int>&wt,vector<int>&v,int i,int b){
    if(i==wt.size()){
        return 0;
    }
    int s=knapsack(w,wt,v,i+1,b);
    int t=0;
    if(b+wt[i]<=w){
        t=v[i]+knapsack(w, wt, v,i+1,b+ wt[i]);
    }
    return max(s,t);
}
int main(){
    int n,w;
    cin>>n>>w;
    vector<int>wt(n);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<knapsack(w,wt,v,0,0)<<endl;
    return 0;

}