#include <iostream>
using namespace std; 
int dfs(int x){
	if (x==1 || x==2) return 1;
	return dfs(x-1)+dfs(x-2); 
}
int main(){
	int x; 
	cin >> x; 
	cout << dfs(x); 
	return 0;
}
