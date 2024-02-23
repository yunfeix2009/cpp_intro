#include <iostream>
using namespace std; 
const int maxn = 1001;
int a[maxn][maxn]; 
int s[maxn][maxn];

int main(){
	int n, m, q; 
	cin >> n >> m >> q; 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i; i <= n; i++){
		for(int j = 1; j <= m; j++){
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
		}
	}
	while(q--){
		int x1, y1, x2, y2, sum=0; 
		cin >> x1 >> y1 >> x2 >> y2;
		sum = s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[1-1][y1-1]; 
		cout << sum << endl; 
	}
	return 0;
}
