template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return sqr(POW(B,P/2));}

###### MOD
```
ll BigMod(ll a, ll b, ll m) {
	a %= m; 
	ll res = 1;
	while (b > 0) {
		if (b & 1) res = res * a % m;
		a = a * a % m;
		b >>= 1;
	} 
	return res;
}
```

```
ll ModInverse(ll number, ll mod){
	return BigMod(number, mod-2, mod);
}
```

```
ll Mulmod(ll base, ll power, ll mod){
	if(power == 0) return 0; 
	if(power == 1) return base % mod; 
	ll x = Mulmod(base, power / 2,mod); 
	x = (x+x) % mod; 
	if(power % 2) x = (x + (base % mod)) % mod;
	return x;
}
```

```
ll BigMulmod(ll base, ll power, ll mod){
	if(power==0) return 1%mod; 
	if(power==1) return base%mod; 
	ll x = BigMulmod(base,power/2,mod); 
	x = Mulmod(x,x,mod); 
	if(power%2) x = Mulmod(x,(base%mod),mod);
	return x;
}
```

```
bool isPrime(ll n){
	if (n < 2) return false;
	else if (n == 2) return true; 
	else if (n % 2 == 0) return false;
	for (ll i = 3; i*i <= n; i += 2){
		if (n % i == 0) return false;
	}
	return true;
}
```

###### Operation with string and char
```
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
```

```
bool isConso(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
```

```
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
```

```
template<class T> string convert(T _input) { stringstream blah; blah << _input; return blah.str(); }
```

```
int distchar(char a, char b){int x = ((a - b)+26)%26;int y = ((b-a)+26)%26;return min(x,y);}
```

###### Vector
```
vec.resize(unique(all(vec)) - vec.begin());
vec.erase(unique(all(vec)), vec.end());
```

###### Double Compare
```
bool equal(double a, double b) {
	if (fabs(a - b) <= EPS ) return true; else return false;
}

```

```
bool notEqual(double a, double b) {
	if (fabs(a - b) > EPS) return true; else return false;
}
```

```
bool lessThan(double a, double b) {
	if (a + EPS < b) return true; else return false;
}
```

```
bool greaterThan (double a, double b) {
	if (a > b + EPS) return true; 
	else return false;
}
```

```
bool lessThanOrEqual (double a, double b) {
	if (equal(a, b) or (lessThan(a, b))) return true;
	else return false;
}
```

```
bool greaterThanOrEqual(double a, double b) {
	if (equal(a, b) or greaterThan(a, b)) return true; 
	else return false;
}

```

###### Sort by descending order

```
sort(arr, arr+n, greater<int>());
sort(s2.begin(), s2.end(), greater<char>());
```

###### File operation

```
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
```

After this, the program reads the input from the file ”input.txt” and writes the output to the file ”output.txt”.

###### Precision

`cout << fixed << setprecision(6) << endl;`
    
With `<iomanip>` you can use `std::fixed` and `std::setprecision`
Printing the correct number of decimal points with cout.

###### Char or String input

```
char c, s[100], line[1000];
scanf("%c", &c);
scanf("%s", s);
```
    
You can take a string as input in C using `scanf(“%s”, s)` But, it accepts string only until it finds the first space.
    
```
 scanf("\n");
 scanf("%[^\n]%*c", line);
```
    
in order to take a line as input, you can use `scanf("%[^\n]%*c", s)` where  is defined as `char s[MAX_LEN]` where  is the maximum size of . Here, `[]` is the scanset character. `^\n` stands for taking input until a newline isn't encountered. Then, with this `%*c` it reads the newline character and here, the used `*` indicates that this newline character is discarded.

 `printf("%c\n%s\n%s\n", c, s, line);`
    
Note: After inputting the character and the string, inputting the sentence by the above mentioned statement won't work. This is because, at the end of each line, a new line character (\n) is present. So, the statement: `scanf("%[^\n]%*c", s)` will not work because the last statement will read a newline character from the previous line. This can be handled in a variety of ways and one of them being: `scanf("\n")` before the last statement or ignore it just use `cin.ignore()`

    
```
int t;  
cin >> t; 
cin.ignore(); 
while(t--){ 
    string s; 
    getline(cin, s);
 }
```
