#include<bits/stdc++.h>
using namespace std;
int generate_path(int n,int m,vector<vector<int>>&mat,int i,int j){
    if(i==(n-1)&& j==(m-1)){
        return mat[i][j];
    }
    int d=INT_MIN,r= INT_MIN;
    if(i+1<n){
        d=generate_path(n, m, mat,i+1,j);
    }
    if(j+1<m) {
        r=generate_path(n, m, mat, i,j+1);
    }
    return mat[i][j]+max(r,d);
}
int main(){
    int n,m;
    cin>>n>>m;
     vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    cout<<generate_path(n,m,mat,0,0)<<endl;
    return 0;
}
