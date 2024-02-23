#include <iostream>
using namespace std;

string ans = "";

void dfs(string sa, string sb){
        if (sa.size() == 1){
                ans = sa + ans;
                return;
        }
        ans = sa.substr(0, 1)+ans;
        int pos_first = sb.find(sa.substr(0, 1));
        if (sa.substr(1+pos_first, sa.size() - 1 - pos_first).size() != 0){
		dfs(sa.substr(1+pos_first, sa.size() - 1 - pos_first), sb.substr(pos_first+1, sb.size() - 1 - pos_first));
        }
	if (sa.substr(1, pos_first).size() != 0){
	dfs(sa.substr(1, pos_first), sb.substr(0, pos_first));
	}
	return;
}

int main(){
        string sa, sb;
        cin >> sa;
        cin >> sb;
        dfs(sa, sb);
	cout << ans; 
        return 0;
}
