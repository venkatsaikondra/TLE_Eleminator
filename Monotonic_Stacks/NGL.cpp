#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the values of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int>s;
    vector<int>b(n);
    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>=a[i]){
            s.pop();
        }
        if(s.empty()){
            b[i]=-1;
        }
        else{
            b[i]=s.top();
        }
        s.push(a[i]);
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}