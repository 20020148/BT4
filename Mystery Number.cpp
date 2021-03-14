#include<iostream>
using namespace std; 

int main(){
	int n;
	cin >> n;
	int a[1000], arr[1000];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
	} 
	for(int i = 0; i <= n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i <= n; i++){
		for(int j = 0; j < n; j++ ){
			if(a[j]==arr[j]) {
			break;
		}
	}
		int j; 
		if(j=n) cout << arr[i]; 
}
		return 0;	
} 
