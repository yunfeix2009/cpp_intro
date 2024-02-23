#include <iostream>
using namespace std;

int maxn(int n, int a[]){
        int ans = a[0];
        for (int i=1; i<n; i++){
                if (a[i] > ans) ans = a[i];
        }
        return ans;
}


void counting_sort(int n, int a[]){
        int max_n = maxn(n, a);
        int count_array[max_n + 1];
        for (int i = 0; i <= max_n; i++){
            count_array[i] = 0;
        }
        for (int i=0; i<n; i++){
            count_array[a[i]]++;
        }
        int temp = 0;
        for (int i=0; i<=max_n; i++){
                while (count_array[i] != 0){
                        a[temp++] = i;
                        count_array[i]--;
                }
        }
        return;
}

int main(){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        counting_sort(n, a);
        for (int i = 0; i < n; i++) cout << a[i] << ' ';
        return 0;
}

