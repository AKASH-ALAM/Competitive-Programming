__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}
bool cmp(__int128 x, __int128 y) { return x > y; }

void solve(){
    __int128 a, b;
    a = read(); b = read(); 
    print(a + b);
}

//operator overloading
istream &operator >> (istream &is, __int128 &v) {
   string s; is >> s; v = 0;
   for(auto &it : s) if(isdigit(it)) v = v*10 + it - '0';
   if(s[0] == '-') v *= -1;
   return is;
}

ostream &operator << (ostream &os, const __int128 &v) {
   if(v == 0) return (os << "0");
   __int128 num = v;
   if(v < 0) os << '-', num = -num;
   string s;
   for(;num > 0; num /= 10) s.push_back((char)(num % 10) + '0');
   reverse(all(s));
   return (os << s);
}

void solve() {
   __int128 a;
   cin >> a;
   __int128 b = a + a;
   cout << b << endl;
}