#include<iostream>
using namespace std;
const int mx_n = 1210;
int n, q;
int a[mx_n];
int s[mx_n];
int l, r, c;
int main(){
    cin >> n >> q;
    cin >> a[1];
    s[1] = a[1];
    for (int i = 2; i<=n; i++){
        cin >> a[i];
        s[i] = a[i] - a[i-1];
    }
    while (q--){
        cin >> l>> r >> c;
        s[l] += c;
        s[r+1] -= c;
    }
    for (int i=1; i<=n; i++){
        s[i] += s[i-1];
        cout << s[i] << " ";
    }
    return 0;
}

/*
 6 3
 1 2 2 1 2 1
 1 3 1
 3 5 1
 1 6 1
 */

//3 4 5 3 4 2
