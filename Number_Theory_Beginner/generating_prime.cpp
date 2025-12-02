#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number=";
    cin>>n;
    /*
    //
    int c;
    for(int i=2;i<=n;i++){
         c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c<=2){
            cout<<i<<endl;
        }
    }
    
*/
 vector<int>prime(n+1,1);
 prime[0]=0;
 prime[1]=0;
 for(int i=2;i*i<=n;i++){
    if(prime[i]==1){
        for(int j=i*i;j<n;j+=i){
            prime[j]=0;
        }
    }
 }
 for(int i=0;i<n;i++){
    if(prime[i]==1){
        cout<<i<<endl;
    }
 }
    
    return 0;
}