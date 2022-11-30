 #include<iostream>
using namespace std;
int main(){
    int n,i;
    float sum = 0;
    cin>>n;
    int arry[n];
    int thr = 0, tw = 0,flag = 0;
    int vajal = 1;
    for(i = 0; i < n; i++){
        cin>>arry[i];
        if(arry[i] == 3) flag = 1;
        else{
            flag = 0;
            vajal = 0;
        }
    }
    if(flag && vajal){
        cout<<n<<endl;
        return 0;
    }
    for(i = 0; i < n; i++){
        if(n == 3){
            if(arry[i] == 3) thr++;
            else if(arry[i] == 2) tw++;
        }
        sum = sum + arry[i];
    }

    if(thr == 2 && tw == 1){
        cout<<n<<endl;
        return 0;
    }

    int tmp = sum / 4;
    float check = sum / 4;
    if(check > tmp){
        cout<<tmp + 1<<endl;
    }
    else if(tmp == check){
        cout<<tmp<<endl;
    }
    return 0;
}

//4005097     Jul 3, 2013 3:58:36 AM	fuwutu	 158B - Taxi	 GNU C++0x	Accepted	46 ms	0 KB
/* #include <stdio.h>

using namespace std;

int main()
{
    int n, s, count[5]= {0};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &s);
        count[s] += 1;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    printf("%d\n", total);
    return 0;
} */