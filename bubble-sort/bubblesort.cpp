#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)

int main() {
    IOS; //optimization
    int n;
    cin >> n; //size of array
 	int array[n];
 	for(int i = 0 ; i < n; i ++){
 		cin >>array[i];
	 }
	for(int i = 0 ; i < n; i ++){
		for(int j = 0; j < n-1; j ++){
			if(array[j] > array[j+1]){
				swap(array[j],array[j+1]);
			}
		}
	}
	for(int i: array){
		cout << i << " ";
	}
	 
 return 0;
}



