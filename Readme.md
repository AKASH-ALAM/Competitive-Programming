ios::sync_with_stdio(0);
	cin.tie(0);

ios_base::sync_with_stdio(false);
    cin.tie(NULL);

sort(array, array+size); // #include <algorithm> 

int rev(int a, int b){
    return a > b;
}

sort(array, array+size, rev); // decending order