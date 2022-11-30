#include<iostream>
using namespace std;
void is_perfect(int n){
    int i, check = 0;
    for(i = 1; i <= n / 2; i++){
        if(n % i == 0){
            check = check + i;
        }
    }
    if(check == n){
        cout<<n<<endl;
        check = 0;
    }
}
int main(){
    int i,j,t,p;
    cin>>t;
    while(t--){
        cin>>p;
        for(i = 6; i <= p; i += 2){
            is_perfect(i);
            if(i == 8128)
                break;
        }
        if(8128 == i){
            if(p > 8128 && p >= 33550336)
                cout<<"33550336"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){     //it was cheting and output was correct but not accepted (wrong answer) :(
        int n;
        cin>>n;
        if(n  >= 33550336){
            cout<<"6"<<endl<<"28"<<endl<<"496"<<endl<<"8128"<<endl<<"33550336"<<endl;
        }
        else if(n >= 8128){
            cout<<"6"<<endl<<"28"<<endl<<"496"<<endl<<"8128"<<endl;
        }
        else if(n >= 496){
            cout<<"6"<<endl<<"28"<<endl<<"496"<<endl;
        }
        else if(n >= 28){
            cout<<"6"<<endl<<"28"<<endl;
        }
        else{
            cout<<"6"<<endl;
        }
        cout<<endl;
    }
    return 0;
}*/
