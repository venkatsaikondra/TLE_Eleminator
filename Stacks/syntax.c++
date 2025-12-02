//LIFO container
#include<bits/stdc++.h>
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}