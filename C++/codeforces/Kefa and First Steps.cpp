/* #include <iostream>
using namespace std;
int main(){
    long long n, i;
    cin>>n;
    long long arry[10001];
    
    for(i = 0; i < n; i++){
        cin>>arry[i];
    }
    long long max = 0, min = 0;
    for(i = 0; i < n - 1; i++){
        if(arry[i] <= arry[i+1]){
            arry[i] = 0;
        }
    }
    for(i = 0; i < n; i++){
        if(arry[i] == 0){
            min++;
        }
        else{
            if(min > max){
                max = min;
                min = 0;
            }
        }
    }
    cout<<max + 1<<endl;

    return 0;
}
 */

/* #include <iostream>
using namespace std;

int main()
{
    int n, l(1), ml(1);
    cin >> n;
    int profits[n];

    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
        if (i > 0)
            if (profits[i] >= profits[i - 1])
            {
                l++;
                ml = max(ml, l);
            }
            else
                l = 1;
    }

    cout << ml << endl;
    return 0;
} */

/* #include <iostream>
using namespace std;
int main(){
    int n, a(1), b(1);
    int mx = 0;
    cin>>n;
    int arry[n];
    for(int i = 0; i < n; i++){
        cin>>arry[i];
        if(i > 0)
            if(arry[i - 1] <= arry[i]){
                a++;
                mx = max(a,b);
            }
            else a = 1;
    }
    cout<<mx<<endl;
    return 0;
} */

#include <iostream>
using namespace std;
int main(){
    int n, i, count = 0;
    int maxx = 0;
    cin>>n;
    int arry[n];
    for(i = 0; i < n; i++) cin>>arry[i];
    for(i = 0; i < n - 1; i++){
        if(arry[i] <= arry[i+1]) count++;
        else{
            if(maxx < count)
                maxx = count;
                count = 0;
        }
    }
    if(count > maxx) maxx = count;
    cout<<maxx + 1<<endl;
    return 0;
}