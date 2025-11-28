#include <bits/stdc++.h>
using namespace std;

string binary_string(int n, string s) {
    if(n==0) {
        reverse(s.begin(), s.end());
        return s;
    }
    s.push_back(char('0' + n % 2));
    return binary_string(n / 2, s);
}

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    cout<< binary_string(n, "");
    return 0;
}
