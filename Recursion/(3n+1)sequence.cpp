#include<bits/stdc++.h>
using namespace std;
int sequence(int n, int count){
    if(n==1){
        return count;
    }
    if(n%2==1){
        return sequence(3*n+1, count+1);
    }
    else{
        return sequence(n/2, count+1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<sequence(n,1);
}