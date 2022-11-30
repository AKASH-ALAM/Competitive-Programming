#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; scanf("%d", &n);
    int *array = (int *) malloc (sizeof(int) * n);
    int de, check = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    if(n == 1){
        printf("0\n");
        return 0;
    }
    sort(array, array+n);
    
    for(int i = 0, k = 0; i < array[n - 1]; i++, k++){
        de = k;
        if(check == n){
            de--;
            break;
        }
        int desire = array[0] + k; //cout << "desire : " << desire << endl;
        int desire2;
        if(desire != array[n - 1]){
            desire2 = (array[n - 1] - k);
        }
        if(desire == array[n - 1]) {
            desire2 = desire;
        }
        if(desire == desire2){
            for(int j = 0; j < n ; j ++){
                if(desire < array[j]){
                    if(desire == (array[j] - k)){
                        check++;
                        //cout << "check : " << check << " ";
                    }
                    else{
                        check = 2;
                        break;
                    }
                }
                else if(desire == array[j]){
                    check++;
                    //cout << "check : " << check << " ";
                } else {
                    if(desire == (array[j] + k)){
                        check++;
                        //cout << "check : " << check << " ";
                    }
                    else{
                        check = 2;
                        break;
                    }
                }
            }// cout << endl;
            
        }
    }
    if(check == n){
        printf("%d\n", de);
    } else printf("-1\n");
    return 0;
}
