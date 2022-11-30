#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    char *s = (char *)malloc(n * n * sizeof(char)); 
  
    int i, j;
    for (i = 0; i <  n; i++) 
      for (j = 0; j < n; j++) 
        cin>> *(s + i*n + j);
  
    for (i = 0; i <  n; i++) {
        for (j = 0; j < n; j++){
            printf("%c ", *(s + i*n + j));
        } 
        cout << endl;
    }
       

    
   return 0;
}