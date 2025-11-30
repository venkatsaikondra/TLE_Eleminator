#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    vector<int>pf;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                pf.push_back(i);
            }
        }
    }
    if(n>1){
        pf.push_back(n);
    }
    for(int i=0;i<pf.size();i++){
        cout<<pf[i]<<" ";
    }
    return 0;
}