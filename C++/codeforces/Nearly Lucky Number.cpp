#include<bits/stdc++.h>
//Nayeem Mollick Joy ,Applied Physics And Electronic Engineering , University of Rajshahi.

  using namespace std;
  typedef long long ll;

int main(){
    bool w = true;
    string s;
    cin >> s;
    ll len = s.length();
    
    ll count = 0;
    
    for(int i=0; i<len; i++){
        if(s[i]=='7' || s[i]=='4') count++;
    }
     
    if(count==0){
         cout<<"NO"<<endl;
         return 0;
     }
     
    while(count!=0){
      int p = count % 10;
      if(p != 4 && p != 7)
        w = false;
      count = count/10;
  }

  if(w==true) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  return 0;
}