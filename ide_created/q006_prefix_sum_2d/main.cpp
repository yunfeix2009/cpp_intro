/*
 note: queries start at index of 1
 */

#include<iostream>
using namespace std;
const int mx_n = 1000;
int n, m, q, x_1, y_1, x_2, y_2;
int a[mx_n][mx_n];
int s[mx_n][mx_n];
int main(){
    memset(a, 0, sizeof(a));
    memset(s, 0, sizeof(s));
    //start from index of one, so that the top row and the leftmost column are all zero, avoiding index out of range.
    cin >> n >> m >> q;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            s[i][j] = s[i][j-1] + s[i-1][j] - s[i-1][j-1] + a[i][j];
        }
    }
    
    while (q--){
        cin >> x_1 >> y_1 >> x_2 >> y_2;
       cout << s[x_2][y_2] - s[x_1-1][y_2] - s[x_2][y_1-1] + s[x_1-1][y_1-1] << endl;
    }
    
    
    return 0;
}

/*
 3 4 3
 1 7 2 4
 3 6 2 8
 2 1 2 3
 1 1 2 2
 2 1 3 4
 1 3 3 4
 */

/*
 17
 27
 21
 */
