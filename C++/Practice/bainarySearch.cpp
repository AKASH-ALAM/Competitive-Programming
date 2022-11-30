#include<bits/stdc++.h>
using namespace std;
int main(){
    int arry[] = {1,2,3,4,5,6,7,8,9,10,11}, low_indx = 0, high_indx = 10, mid_indx, num = 8;
    while(low_indx <= high_indx){
        mid_indx = (low_indx + high_indx) / 2;
        if(num == arry[mid_indx]){
            break;
        }
        if(num < arry[mid_indx]){
            high_indx = mid_indx -1;
        }
        else{
            low_indx = mid_indx + 1;
        }
    }
    if(low_indx > high_indx){
       cout<<num<<" is not found in the Array."<<endl;
    }
    else{
        cout<<arry[mid_indx]<<" is found in the array. It is the "<<mid_indx<<"'th element of the array."<<endl;
    }
}
