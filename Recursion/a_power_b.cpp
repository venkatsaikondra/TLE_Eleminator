#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    return a*pow(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
    return 0;
}
/*
int main(){
int a,b;
cin>>a>>b;
int r=1;
for(int i=1;i<=b;i++){
    r=r*a;
    }}
*/
