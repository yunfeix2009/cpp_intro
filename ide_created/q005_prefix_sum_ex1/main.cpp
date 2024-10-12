//basic c++ prefix sum. input n, then n numbers, output the prefix sum array

#include<iostream>

using namespace std;
const int mx_n = 1000;
int n, q, l, r;
int a[mx_n], s[mx_n];

int main(){
    cin >> n >> q;
    memset(a, 0, sizeof(a));
    memset(s, 0, sizeof(s));
    for (int i=0;i<n;i++) cin >> a[i];
    s[0] = a[0];
//    cout << s[0] << ' ';
    for (int i = 1; i<n; i++){
        s[i] = s[i-1]+a[i];
//        cout << s[i] << ' ';
    }
    for (int i = 0; i<q; i++){
        cin >> l >> r ;
        cout << s[r] - s[l-1]; 
//        cout << s[i] << ' ';
    }
}
