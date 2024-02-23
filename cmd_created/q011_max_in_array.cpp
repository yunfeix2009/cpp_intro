#include<iostream>
using namespace std; 

int find_max(int n, int a[]){
	int ans = -1; 
	for (int i = 0; i<n; i++){
		if(i==0) ans = a[i]; 
		if(ans < a[i]) ans = a[i]; 
	}
	return ans; 
}

int main(){
	int n; 
	cin >> n;
	int a[n]; 
	for (int i=0; i<n; i++) cin >> a[i]; 
	cout << find_max(n, a); 
	return 0; 
}
