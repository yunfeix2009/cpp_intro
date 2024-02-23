#include <iostream>
using namespace std;
const int maxn = 10001;
int a[maxn];

void insertion_sort(int a[], int n){
        for(int i =1; i <= n; i++){
                int key = a[i];
                int j = i-1;
                while(j >= 1 && a[j] > key){
                        a[j+1] = a[j];
                        j--;
                }
                a[j+1] = key;
        }
}

void selection_sort(int a[], int n){
	for(int i = 1; i<n; i++){
		int ith = i;
		for(int j = i+1; j <= n; j++){ ; 
			if(a[j] < a[ith]){
				 ith = j;
			} 
		}
		int t = a[i]; 
		a[i] = a[ith];
		a[ith] = t; 
	}
}

int main(){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        selection_sort(a, n);
        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        return 0;
}
