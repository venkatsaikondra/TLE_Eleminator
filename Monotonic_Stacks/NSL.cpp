#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
     vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int>st;
    vector<int>b(n);
    for(int i=0;i<n;i++){
       while(!st.empty() && st.top()>=a[i]){
        st.pop();
       }
       if(st.empty()){
        b[i]=-1;
       }
       else{
        b[i]=st.top();
       }
       st.push(a[i]);
    }
   for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
   }

    return 0;
}