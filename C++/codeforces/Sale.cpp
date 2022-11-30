#include <iostream>
#include <stdlib.h>
using namespace std;

int comparefunc(const void * a, const void * b){
    return (*(int*) a - *(int*) b);
}

int main(){
    int m, n, i;
    cin>>m>>n;
    int arry[m];
    int sum = 0, count = 0;
    for(i = 0; i < m; i++) cin>>arry[i];
    qsort(arry, m, sizeof(int), comparefunc);
    for(i = 0; i < m; i++){
        if(arry[i] < 0 && count != n){
            sum = sum + arry[i];
            count++;
        }
    }
    cout<< sum * (-1) <<endl;
    return 0;
}

//http://codeforces.com/contest/34/problem/B
//from sohelr360
/*#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,sum = 0;
    cin>>n>>m;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin>>ar[i];
    sort(ar, ar+n);
    for(int i = 0; i < m; i++)
    {
        if(ar[i] <= 0)
            sum += ar[i];
    }
    cout<<abs(sum)<<endl;
    return 0;
}*/
