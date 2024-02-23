#include <iostream>
using namespace std;

void quick_sort(int a[], int l, int r){
    if (l>=r) return;
    int i = l+1, j = l+1;
    while( j <=r){
        if(a[j] < a[l]){
            swap(a[i++], a[j]);
        }
        j++;
        
    }
    swap(a[i-1], a[l]);
    quick_sort(a, l, i-2);
    quick_sort(a, i, r);
}

int main(){
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++) cin >> a[i];
        quick_sort(a, 1, n);
        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        return 0;
}

