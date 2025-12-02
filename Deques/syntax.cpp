//add or remove elements from both ends
#include<bits/stdc++.h>
using namespace std;
int main(){
    dequeue<int>d;
    d.push_front(3);
    d.push_back(4);
    d.pop_back();
  //  d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;
    if(d.empty()){
        cout<<"Dequeue is empty"<<endl;
    }
    else{
        cout<<"Dequeue is not empty"<<endl;
    }
    return 0;
}