#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int l, r, mid, count = 0, sum = 0;
        cin>>l>>r;
        for(; l <= r; l++){
            mid = l / 2; 
            if((mid*2) != l){
                mid++;
            }
            int tmp = 1;
            while(tmp){
                int flag = 1;
                tmp = mid;
                sum = sum + tmp;
                if(sum > l){
                    flag = 0;
                    mid--;
                    sum = 0;
                }
                if(sum == l){
                    count++;
                    break;
                }if(sum < l) flag = 1;
                if(flag) tmp--;
            } sum = 0;
        }
        cout<<count<<endl;
    }
    return 0;
}