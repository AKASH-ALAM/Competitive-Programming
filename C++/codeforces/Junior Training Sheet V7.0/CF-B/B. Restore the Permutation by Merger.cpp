#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

   int t;   cin >> t;
   while(t--){
       int n;   cin >> n;
       vector <int> vec;
       vector <int>::iterator it;

       int *arry = (int*) malloc(sizeof(int) * n*2);
       for(int i = 0; i < n*2; i++) cin >> arry[i];
        
        for(int i = 0; i < n*2; i++){
            if(i == 0) vec.push_back(arry[i]);
            it = find(vec.begin(), vec.end(), arry[i]);
            if(it == vec.end()) vec.push_back(arry[i]);
        }

       for(it = vec.begin(); it != vec.end(); it++){
           cout << *it << " ";
       } cout << endl;
   }
   return 0;
}
