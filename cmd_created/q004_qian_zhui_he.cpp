#include<iostream>
using namespace std; 
int a[10001], s[10001]; 
int main(){
	int n; cin >> n;
	memset(s, 0, sizeof(s)); 
	for(int i = 1; i <= n; i++) cin >> a[i]; 
	s[1] = a[1];
	cout << s[1] << " "; 
	for (int i = 2; i <= n; i++){
		s[i] = s[i-1] + a[i];
		cout << s[i] << " ";
	}
 
	return 0; 
}
