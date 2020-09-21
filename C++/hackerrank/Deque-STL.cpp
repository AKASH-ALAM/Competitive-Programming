#include <bits/stdc++.h> 
using namespace std; 

void printKMax(int arr[], int n, int k) { 
	deque <int> Qi(k); 
	int i; 
	for (i = 0; i < k; ++i) { 
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) {
            Qi.pop_back();
        }
		Qi.push_back(i); 
	} 

	for (; i < n; ++i) { 
		cout << arr[Qi.front()] << " "; 
		while ((!Qi.empty()) && Qi.front() <= i - k) 
			Qi.pop_front();
		while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) {
            Qi.pop_back(); 
        }
		Qi.push_back(i); 
	} 
	cout << arr[Qi.front()]; 
} 

int main() { 
    //N.B. this is not my code.
    // and also i don't understand this code. it's to hard understand to me.
	int t;  cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        printKMax(arr, n, k);
        cout << endl; 
    }
	
	return 0; 
} 
