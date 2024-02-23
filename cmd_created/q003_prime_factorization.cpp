#include <iostream>
using namespace std; 
void dfs(int n, int p){
	if(n == 1) return;
	if(n%p == 0){
		cout << p << " ";
		dfs(n/p, p);
	}else{
		dfs(n, p+1); 
	}
}
int main(){
	int n; 
	cin >> n;
	dfs(n, 2); 
	return 0; 
}
