#include <iostream>
using namespace std; 

int n; 

void swap(int a[], int p, int q){
	int c = a[p];
	a[p] = a[q]; 
	a[q] = c; 
} 
	

void bubble_sort(int a[]){
	for (int i = n-1; i >= 2; i--){	
		for (int j = 0; j <= i-2; j++){
			if (a[j] > a[j+1]) swap(a, j, j+1); 
		}
	}
}

int main(){
	cin >> n;
	int a[n];  
	for (int i = 0; i < n; i++) cin >> a[i]; 
	bubble_sort(a); 
	for (int i = 0; i < n; i++) cout << a[i] << ' '; 
	return 0; 
}
