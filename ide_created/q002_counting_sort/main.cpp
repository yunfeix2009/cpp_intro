#include <iostream>
using namespace std;

int c[10000];

int maxn(int n, int a[]){
        int ans = a[0];
        for (int i=1; i<n; i++){
                if (a[i] > ans) ans = a[i];
        }
        return ans;
}

int minn(int n, int a[]){
        int ans = a[0];
        for (int i=1; i<n; i++){
                if (a[i] < ans) ans = a[i];
        }
        return ans;
}


void counting_sort(int n, int a[]){
        int max_n = maxn(n, a);
        int min_n = minn(n, a);
        int count_array[max_n + 1 - min_n];
        for (int i = 0; i < max_n + 1 - min_n; i++){
            count_array[i] = 0;
        }
        for (int i=0; i<n; i++){
            count_array[a[i] - min_n]++;
        }
    
    for (int i = 1; i < max_n + 1 - min_n; i++) count_array[i] = count_array[i-1] + count_array[i];
    for (int i = n; i >=1; i--){
        c[count_array[a[i]-min_n]] = a[i];
        count_array[a[i] - min_n]--;
    }
    
        int temp = 0;
        for (int i=0; i<=max_n - min_n; i++){
                while (count_array[i] != 0){
                        a[temp++] = i+min_n;
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
        for (int i = 0; i < n; i++) cout << c[i] << ' ';
        return 0;
}
